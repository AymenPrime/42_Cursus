/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:47:39 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/04 12:47:47 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*#include <fcntl.h>
int	main(void) {
char	c = 'h';

	int fd = open("text.txt", O_WRONLY | O_CREAT | O_APPEND,
			S_IRUSR | S_IWUSR);
	ft_putchar_fd(c, fd);
	return (0);
}*/