/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:42:07 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/04 15:03:54 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	fix;
	size_t	j;

	fix = 0;
	if (!needle || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[fix] && fix < len)
	{
		j = 0;
		while (haystack[fix + j] == needle[j] && haystack[fix + j] && (fix
				+ j) < len && needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[fix]);
		fix++;
	}
	return (NULL);
}

/*int main() {
	char hs[] = "hellomynameisSlimShady";
	char nl[] = "myname";
	printf("%s", ft_strnstr(hs, nl, 7));
}*/
