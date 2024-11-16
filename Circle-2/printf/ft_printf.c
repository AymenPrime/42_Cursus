/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:51:47 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/15 19:49:51 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_all(const char *format, va_list args, int *count)
{
	if (format[1] == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (format[1] == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (format[1] == 'd' || format[1] == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (format[1] == 'u')
		ft_putunbr(va_arg(args, unsigned int), count);
	else if (format[1] == 'x')
		hex_lower(va_arg(args, unsigned int), count);
	else if (format[1] == 'X')
		hex_upper(va_arg(args, unsigned int), count);
	else if (format[1] == 'p')
		ft_pointer(va_arg(args, void *), count);
	else if (format[1] == '%')
		ft_putchar('%', count);
	else
		ft_putchar(format[1], count);
}

void	ft_char(char c, int *count)
{
	ft_putchar(c, count);
}

void	ft_format(const char *format, va_list args, int *count)
{
	if (format[0] == '%')
		ft_all(format, args, count);
	else
		ft_char(format[0], count);
}

int	while_format(const char *format, va_list args, int *count)
{
	int	i;

	i = 0;
	if (format[i] == '%' && format[i + 1] == '\0')
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_format(&format[i], args, count);
			i++;
		}
		else
			ft_putchar(format[i], count);
		i++;
	}
	return (*count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	count = while_format(format, args, &count);
	va_end(args);
	return (count);
}
#include <stdio.h>
int main()
{		
    int dyali = ft_printf("% %");
	printf("\n");
    int dyalhom = printf("% %");
	printf("\n");
	printf("%d", dyali);
	printf("\n");
	printf("%d", dyalhom);
	printf("\n");
}
