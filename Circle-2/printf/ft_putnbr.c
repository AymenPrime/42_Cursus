#include "libftprintf.h"

void ft_putnbr(int num, int *count)
{
    long n;

    n = num;
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
    if(n < 10)
        ft_putchar(n + 48, count);
}