/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:42:22 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/05 17:44:12 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new;
	int		len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new = malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*char ex(unsigned int i, char c) {
	return (c + i);
}*/
/*char ex1(unsigned int i, char c) {
	(void)i;
	if(c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
int	main(void) {
	char str[] = "abc";
	printf("%s", ft_strmapi(str, ex1));
}*/