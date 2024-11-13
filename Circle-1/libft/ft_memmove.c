/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:33:47 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/05 20:47:06 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*cpy(char *dest, char *src, size_t n)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (i < n)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*sr;
	size_t	i;

	if (!dest || !src)
		return (NULL);
	dst = (char *)dest;
	sr = (char *)src;
	if (dst < sr)
		cpy(dst, sr, n);
	else
	{
		i = n;
		while (i > 0)
		{
			dst[i - 1] = sr[i - 1];
			i--;
		}
	}
	return (dst);
}
// #include <string.h>
// int	main(void)
// {
// 	char buffer[] = "aymen lifop";
// 	char bufferb[] = "aymen lifop";
// 	ft_memmove(buffer + 5, buffer, 6);
// 	printf("%s\n", buffer);
// 	memmove(bufferb + 5, bufferb, 6);
// 	printf("%s\n", bufferb);
// 	return (0);
// }