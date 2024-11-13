/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:47:41 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/02 23:13:49 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
	{
		return (1);
	}
	return (0);
}

/*int main() {
	int aln = 'p';
	int aln1 = '1';
	int aln2 = 96;
	int aln3 = ' ';
	printf("%d\n", ft_isalnum(aln));
	printf("%d\n", ft_isalnum(aln1));
	printf("%d\n", ft_isalnum(aln2));
	printf("%d\n", ft_isalnum(aln3));
	printf("%d\n", isalnum(aln));
	printf("%d\n", isalnum(aln1));
	printf("%d\n", isalnum(aln2));
	printf("%d\n", isalnum(aln3));
}*/
