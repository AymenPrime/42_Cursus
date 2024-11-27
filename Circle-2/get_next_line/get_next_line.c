/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:54:41 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/27 20:45:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 4
#endif

char	*get_next_line(int fd)
{
	static char	*container;
	char		*line;

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
	container = too_many_lines(fd, container);
	if ((!container || *container == '\0'))
		return (free(container), container = NULL, NULL);
	line = get_line(container);
	container = move_to_next_line(container);
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
		b_read = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
	if (b_read < 0)
		return (free(container), NULL);
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

int main()
{
    int fd1 = open("te.txt", O_RDONLY);
    int fd2 = open("aymen.txt", O_RDONLY);
    char *line;
    line = get_next_line(fd1);
    while(line) {
        printf("%s", line);
        free(line);
        line = get_next_line(fd1);
    }
    line = get_next_line(fd2);
    while(line)
    {
        printf("%s", line);
        free(line);
        line = get_next_line(fd2);
    }
    close (fd1);
    close (fd2);
}
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
