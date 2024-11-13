#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
void    ft_format(const char *format, va_list args, int *count);
int     while_format(const char *format, va_list args, int *count);
int     ft_printf(const char *format, ...);
void	ft_putchar(char c, int *count);
void	ft_putnbr(int nb, int *count);
void    ft_putunbr(unsigned int n, int *count);
void	ft_putstr(char *s, int *count);
void	hex_upper(unsigned long num, int *count);
void	hex_lower(unsigned long num, int *count);
void	ft_pointer(void *ptr, int *count);

#endif