/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 23:31:12 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/26 23:39:33 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*too_many_lines(int fd, char *container);
char	*get_line(char *container);
char	*move_to_next_line(char *container);
int		ft_strlen(char *s);
char	*ft_strndup(char *str, size_t n);
char	*ft_strchr(const char *s, int chr);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *str);
#endif
