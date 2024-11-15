#include "libftprintf.h"

void ft_putchar(char c, int *count)
{
    write(1, &c, 1);
    (*count)++;
}

void ft_putstr(char *str, int *count)
{
    int i;

    i = 0;
    if(!str)
        str = "(null)";
    while (str[i])
    {
        ft_putchar(str[i], count);
        i++;
    }
}

void ft_putnbr(int nb, int *count)
{
    long n = nb;
    if(n < 0)
    {
        ft_putchar('-', count);
        n = -n;
    }
    if(n >= 10)
    {
        ft_putnbr(n / 10, count);
        n %= 10;
    }
    ft_putchar(n + 48, count);
}

void ft_putunbr(unsigned int nb, int *count)
{
    unsigned long n = nb;
    if(n >= 10)
    {
        ft_putunbr(n / 10, count);
        n %= 10;
    }
    ft_putchar(n + 48, count);
}