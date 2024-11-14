/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 00:52:02 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/14 00:52:16 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putunbr(unsigned int num, int *count)
{
	if (num >= 10)
	{
		ft_putunbr(num / 10, count);
		num %= 10;
	}
	ft_putchar(num + 48, count);
}
