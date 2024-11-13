/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:38:07 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/06 11:30:20 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int num)
{
	int	i;

	i = 0;
	if (num == 0)
		i = 1;
	if (num < 0)
	{
		i = 1;
		num = -num;
	}
	while (num != 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = -4546;
// 	printf("%d\n", len(nb));
// }
char	*ft_itoa(int nb)
{
	int		leng;
	long	n;
	char	*new;

	n = nb;
	leng = len(n);
	new = (char *)malloc(leng + 1);
	if (!new)
		return (NULL);
	new[leng] = '\0';
	if (n == 0)
		new[0] = '0';
	else if (n < 0)
	{
		new[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		new[--leng] = (n % 10) + '0';
		n /= 10;
	}
	return (new);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = -4546;
// 	printf("%s\n", ft_itoa(nb));
// }
