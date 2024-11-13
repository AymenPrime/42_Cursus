#include "libftprintf.h"

void ft_putunbr(unsigned int num, int *count)
{
    if(num >= 10)
    {
        ft_putunbr(num / 10, count);
        num %= 10;
    }
    ft_putchar(num + 48, count);
}
