/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:49:01 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/05 14:57:09 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	destlen;
	size_t	i;
	int		l;

	if (!dest || !src)
	{
		return (0);
	}
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (size <= destlen)
	{
		return (size + srclen);
	}
	i = 0;
	l = destlen;
	while (src[i] && destlen < size - 1)
	{
		dest[destlen] = src[i];
		i++;
		destlen++;
	}
	dest[destlen] = '\0';
	return (l + srclen);
}
/*int main() {
	printf("%ld\n", ft_strlcat("Hello, ", "World", 10));
}*/
