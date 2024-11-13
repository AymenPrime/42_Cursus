/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:48:32 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/05 17:13:41 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	i = 0;
	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == ch)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
// #include <string.h>
// int    main()
// {
//     const char    p[] = "hello, world!";
//     char    *test = (void *)memchr(p, ',', 14);
//     char    *res = (void *)ft_memchr(p, ',', 14);

//     printf("%s\n %s\n", test, res);
// }