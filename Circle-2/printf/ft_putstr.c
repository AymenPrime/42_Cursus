#include "libftprintf.h"

void ft_putstr(char *s, int *count)
{
    int i;

    i = 0;
    if(!s)
        s = "(null)";
    while (s[i])
    {
        ft_putchar(s[i], count);
        i++;
    }
}