#include "libftprintf.h"

void    ft_format(const char format, va_list args, int *count) 
{
    if (format == 'c')
        ft_putchar(va_arg(args, int), count);
    else if (format == 's')
        ft_putstr(va_arg(args, char *), count);
    else if (format == 'd' || format == 'i')
        ft_putnbr(va_arg(args, int), count);
    else if (format == 'u')
        ft_putunbr(va_arg(args, unsigned int), count);
    else if (format == 'x')
        ft_hex_lower(va_arg(args, unsigned int), count);
    else if (format == 'X')
        ft_hex_upper(va_arg(args, unsigned int), count);
    else if (format == 'p')
        ft_address(va_arg(args, void *), count);
    else if (format == '%')
        ft_putchar('%', count);
    else
        ft_putchar(format[i], count);
}

int ft_check(const char *format, va_list args, int *count)
{
    int i;

    i = 0;
    if(format[i] == '%' && format[i + 1] == '\0')
        return (-1);
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            ft_format(format[i], args, count);

        }
        else
            ft_putchar(format[i], count);
        i++;
    }
    return (*count);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int count;

    count = 0;
    va_start(args, format);
    ft_check(format, args, &count);
    va_end(args);
    return (count);
}

int main() {

    ft_printf("1ST TEST:\n");
    int l1 = printf("- alo %s 3alaykom, %% lyom %d f shher %i li howa %covember \n", "salamo", 9, 9, 'N');
    int l2 = ft_printf("- alo %s 3alaykom, %% lyom %d f shher %i li howa %covember \n", "salamo", 9, 9, 'N');
    ft_printf("+ length --> OG : %d | --> Mine : %d | %s\n\n", l1, l2, (l1 == l2) ? "OK" : "KO");

    ft_printf("2ND TEST:\n");
    l1 = ft_printf("-wash %s, 7na f %p fl memory\n", "a dyalna", "a dyalna");
    l2 = printf("-wash %s, 7na f %p fl memory\n", "a dyalna", "a dyalna");
    ft_printf("+ length --> OG : %d | --> Mine : %d | %s\n\n", l1, l2, (l1 == l2) ? "OK" : "KO");

    ft_printf("3RD TEST:\n");
    l1 = ft_printf("-hexa d 99999999 howa: %x lowercase | %X uppercase\n", 99999999, 99999999);
    l2 = printf("-hexa d 99999999 howa: %x lowercase | %X uppercase\n", 99999999, 99999999);
    ft_printf("+ length --> OG : %d | --> Mine : %d | %s\n\n", l1, l2, (l1 == l2) ? "OK" : "KO");

    ft_printf("4TH TEST:\n");
    l1 = ft_printf("-number [-24] unsigned int howa: [%u]\n", 24);
    l2 = printf("-number [-24] unsigned int howa: [%u]\n", 24);
    ft_printf("+ length --> OG : %d | --> Mine : %d | %s\n\n", l1, l2, (l1 == l2) ? "OK" : "KO");

    ft_printf("5TH TEST:\n");
    char    *s = "skill issue\n";
    l1 = ft_printf("-%s", s);
    l2 = printf("-%s", s);
    ft_printf("+ length --> OG : %d | --> Mine : %d | %s\n\n", l1, l2, (l1 == l2) ? "OK" : "KO");

    ft_printf("6TH TEST:\n");
    l1 = ft_printf("a\n");
    l2 = printf("a\n");
    ft_printf("+ length --> OG : %d | --> Mine : %d | %s\n\n", l1, l2, (l1 == l2) ? "OK" : "KO");

        ft_printf("7TH TEST:\n");
    l1 = ft_printf("This %p is even stranger\n", (void *)-1);
    l2 = printf("This %p is even stranger\n", (void *)-1);
    ft_printf("+ length --> OG : %d | --> Mine : %d | %s\n\n", l1, l2, (l1 == l2) ? "OK" : "KO");

    ft_printf("8TH TEST:\n");
    l1 = ft_printf("%p\n", (void *)0);
    l2 = printf("%p\n", (void *)0);
    ft_printf("+ length --> OG : %d | --> Mine : %d | %s\n\n", l1, l2, (l1 == l2) ? "OK" : "KO");

    ft_printf("9TH TEST:\n");
    l1 = ft_printf("%c - %s - %p %d - %i - %u - %x %X %%\n", 'a', "test", (void *)0xdeadc0de, 20, -20, -1, -1, 200000000);
    l2 = printf("%c - %s - %p %d - %i - %u - %x %X %%\n", 'a', "test", (void *)0xdeadc0de, 20, -20, -1, -1, 200000000);
    ft_printf("+ length --> OG : %d | --> Mine : %d | %s\n\n", l1, l2, (l1 == l2) ? "OK" : "KO");

    ft_printf("10TH TEST:\n");
    l1 = ft_printf("%c\n", '\0');
    l2 = printf("%c\n", '\0');
    ft_printf("+ length --> OG : %d | --> Mine : %d | %s\n\n", l1, l2, (l1 == l2) ? "OK" : "KO");

    ft_printf("11TH TEST:\n");
    l1 = ft_printf("%i%i%i%i%i%i%i\n", 10, 23, -2, 37, 200, -9999, 977779);
    l2 = printf("%i%i%i%i%i%i%i\n", 10, 23, -2, 37, 200, -9999, 977779);
    ft_printf("+ length --> OG : %d | --> Mine : %d | %s\n\n", l1, l2, (l1 == l2) ? "OK" : "KO");

    ft_printf("% %");
}