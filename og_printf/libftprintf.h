#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c, int *count);
void    ft_putstr(char *str, int *count);
void    ft_putnbr(int nb, int *count);
void    ft_putunbr(unsigned int nb, int *count);
void    ft_hex_lower(unsigned long nb, int *count);
void    ft_hex_upper(unsigned long nb, int *count);
void    ft_address(void *ptr, int *count);

#endif