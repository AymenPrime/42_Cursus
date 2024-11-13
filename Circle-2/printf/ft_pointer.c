#include "libftprintf.h"

void ft_pointer(void *ptr, int *count)
{
    if(ptr == 0)
    {
        ft_putstr("(nil)", count);
        return ;
    }
    ft_putstr("0x", count);
    hex_lower((unsigned long)ptr, count);
}