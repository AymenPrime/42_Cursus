/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:49:27 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/05 17:46:08 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		n = n % 10;
	}
	if (n < 10)
		ft_putchar_fd(n + 48, fd);
}
/*#include <fcntl.h>
int	main(void)
{
	int fd = open("text.txt", O_WRONLY | O_APPEND | O_CREAT, 0640);
	ft_putnbr_fd(10, fd);
	ft_putnbr_fd(-10, fd);
	ft_putnbr_fd(50000, fd);
	ft_putnbr_fd(0, fd);
	ft_putnbr_fd(1, fd);
}*/