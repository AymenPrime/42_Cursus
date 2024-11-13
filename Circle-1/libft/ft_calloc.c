/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:02:36 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/05 00:28:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t i, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(i * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, i * size);
	return (ptr);
}

/*int main()
{
	char *ptr = ft_calloc(10, 1);
	printf("%s\n", ptr);
}*/
