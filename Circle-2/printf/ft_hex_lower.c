/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:51:21 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/14 01:03:06 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	hex_lower(unsigned long nb, int *count)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nb == 0)
	{
		ft_putchar('0', count);
		return ;
	}
	if (nb >= 16)
		hex_lower(nb / 16, count);
	ft_putchar(hex[nb % 16], count);
}
