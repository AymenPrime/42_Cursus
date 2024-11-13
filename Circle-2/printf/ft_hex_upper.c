#include "libftprintf.h"

void hex_upper(unsigned long nb, int *count)
{
    char *hex;

    hex = "0123456789ABCDEF";
    if(nb == 0)
    {
        ft_putchar('0', count);
        return ;
    }
    if(nb >= 16)
        hex_upper(nb / 16, count);
    ft_putchar(hex[nb % 16], count);
}