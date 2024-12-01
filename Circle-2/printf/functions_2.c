/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 01:16:05 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/16 01:16:09 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex_lower(unsigned long nb, int *count)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nb == 0)
	{
		ft_putchar('0', count);
		return ;
	}
	if (nb >= 16)
		ft_hex_lower(nb / 16, count);
	ft_putchar(hex[nb % 16], count);
}

void	ft_hex_upper(unsigned long nb, int *count)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (nb == 0)
	{
		ft_putchar('0', count);
		return ;
	}
	if (nb >= 16)
		ft_hex_upper(nb / 16, count);
	ft_putchar(hex[nb % 16], count);
}

void	ft_address(void *ptr, int *count)
{
	if (ptr == 0)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	ft_putstr("0x", count);
	ft_hex_lower((unsigned long)ptr, count);
}

/*#include <stdio.h>
int	main(void) {
	int x = 24;
	int count = 0;
	ft_address(&x, &count);
	return (0);
}*/
