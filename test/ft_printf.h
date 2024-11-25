/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:49:43 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/17 14:50:24 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

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
