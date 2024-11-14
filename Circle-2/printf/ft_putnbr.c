/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:51:56 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/14 01:00:02 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr(int num, int *count)
{
	long	n;

	n = num;
	if (n < 0)
	{
		ft_putchar('-', count);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, count);
		n %= 10;
	}
	if (n < 10)
		ft_putchar(n + 48, count);
}
