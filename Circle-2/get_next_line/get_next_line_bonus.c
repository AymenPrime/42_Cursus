/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:54:31 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/26 23:35:28 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 4
#endif

#ifndef MAX_FD
# define MAX_FD 1024
#endif

char	*get_next_line(int fd)
{
	static char	*container[MAX_FD];
	char		*line;

	if ((fd < 0) || (BUFFER_SIZE <= 0) || (fd >= MAX_FD))
		return (NULL);
	container[fd] = too_many_lines(fd, container[fd]);
	if ((!container[fd] || *container[fd] == '\0'))
		return (free(container[fd]), container[fd] = NULL, NULL);
	line = get_line(container[fd]);
	container[fd] = move_to_next_line(container[fd]);
	return (line);
}

char	*too_many_lines(int fd, char *container)
{
	char	*buffer;
	ssize_t	b_read;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	b_read = read(fd, buffer, BUFFER_SIZE);
	while (b_read > 0)
	{
		buffer[b_read] = '\0';
		if (!container)
			container = ft_strdup("");
		container = ft_strjoin(container, buffer);
		if (!container)
			return (free(buffer), NULL);
		if (ft_strchr(container, '\n'))
			break ;
	}
	free(buffer);
	if (b_read < 0)
	{
		free(container);
		return (NULL);
	}
	return (container);
}

char	*get_line(char *container)
{
	int		i;
	char	*line;

	i = 0;
	if (!container)
		return (NULL);
	while (container[i] && container[i] != '\n')
		i++;
	if (container[i] == '\n')
		i++;
	line = ft_strndup(container, i);
	if (!line)
		return (free(container), NULL);
	return (line);
}

char	*move_to_next_line(char *container)
{
	char	*new_line;
	char	*tmp;

	new_line = ft_strchr(container, '\n');
	if (!new_line)
		return (free(container), NULL);
	tmp = ft_strndup(new_line + 1, ft_strlen(new_line + 1));
	if (!tmp)
		return (free(container), NULL);
	free(container);
	container = tmp;
	return (container);
}

// int main()
// {
//     int fd1 = open("te.txt", O_RDONLY);
//     int fd2 = open("aymen.txt", O_RDONLY);
//     char *line;
//     line = get_next_line(fd1);
//     while(line) {
//         printf("%s", line);
//         free(line);
//         line = get_next_line(fd1);
//     }
//     line = get_next_line(fd2);
//     while(line)
//     {
//         printf("%s", line);
//         free(line);
//         line = get_next_line(fd2);
//     }
//     close (fd1);
//     close (fd2);
// }
// int main()
// {
//     int fd1 = open("te.txt", O_RDONLY);
//     int fd2 = open("aymen.txt", O_RDONLY);
//     char *line1;
//     char *line2;
//     line1 = get_next_line(fd1);
//     printf("File1: %s", line1);
//     free(line1);

//     line2 = get_next_line(fd2);
//     printf("File2: %s", line2);
//     free(line2);

//     // Read the next line from fd1
//     line1 = get_next_line(fd1);
//     printf("File1: %s", line1);
//     free(line1);

//     close (fd1);
//     close (fd2);
// }
