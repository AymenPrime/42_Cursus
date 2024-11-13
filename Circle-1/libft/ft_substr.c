/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:01:56 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/05 18:21:26 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*bounds(char const *s, unsigned int start)
{
	char	*r;

	if (start >= ft_strlen(s))
	{
		r = (char *)malloc(1);
		if (r)
			r[0] = '\0';
		return (r);
	}
	return (NULL);
}

static char	*cpy_string(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	k;
	char	*r;

	i = 0;
	k = 0;
	r = (char *)malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	while (s[i] && k < len)
	{
		if (i >= start)
		{
			r[k] = s[i];
			k++;
		}
		i++;
	}
	r[k] = '\0';
	return (r);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;

	if (!s)
		return (NULL);
	r = bounds(s, start);
	if (r)
		return (r);
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	return (cpy_string(s, start, len));
}
// #include <string.h>
// int	main(void)
// {
// 	//char *str = "0123456789";
// 	printf("%s\n", ft_substr("Hello, World!", 20, 10));
// }
