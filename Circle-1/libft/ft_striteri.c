/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:45:31 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/05 17:48:57 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void	ex(unsigned int i, char *s)
// {
// 	while (s[i])
// 	{
// 		if (s[i] >= 'a' && s[i] <= 'z')
// 			s[i] -= 32;
// 		i++;
// 	}
// }
// int main()
// {
// 	int i = 0;
//     char str[] = "aymencxknfvm";
// 	while(str[i]) {
// 		ft_striteri(str, ex);
// 		i++;
// 	}
// 	printf("%s\n", str);
//     return (0);
// }