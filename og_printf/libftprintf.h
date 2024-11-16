/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 01:15:33 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/16 01:15:34 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putunbr(unsigned int nb, int *count);
void	ft_hex_lower(unsigned long nb, int *count);
void	ft_hex_upper(unsigned long nb, int *count);
void	ft_address(void *ptr, int *count);
void	ft_format(const char format, va_list args, int *count);
void	ft_check(const char *format, va_list args, int *count);
int		ft_printf(const char *format, ...);

#endif