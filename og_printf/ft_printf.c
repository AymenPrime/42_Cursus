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
    else
        ft_putchar(format, count);
}
int ft_check(const char *format, va_list args, int *count)
{
    int i;

    i = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
            if(format[i + 1] == '\0')
            {
                *count = -1;
                return (*count);
            }
            i++;
            if (format[i] == '%')
                ft_putchar('%', count);
            else
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
    if(!format)
        return (-1);
    va_start(args, format);
    ft_check(format, args, &count);
    if (count == -1)
    {
        va_end(args);
        return (-1);
    }
    va_end(args);
    return (count);
}