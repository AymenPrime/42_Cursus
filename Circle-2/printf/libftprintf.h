/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:52:07 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/14 01:38:15 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

void	ft_all(const char *format, va_list args, int *count);
void	ft_char(char c, int *count);
void	ft_format(const char *format, va_list args, int *count);
int		while_format(const char *format, va_list args, int *count);
int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putunbr(unsigned int n, int *count);
void	ft_putstr(char *s, int *count);
void	hex_upper(unsigned long num, int *count);
void	hex_lower(unsigned long num, int *count);
void	ft_pointer(void *ptr, int *count);

#endif