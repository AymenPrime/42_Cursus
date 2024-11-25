#include "get_next_line.h"

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 500000
#endif
char *get_next_line(int fd) {
    
	char buffer[BUFFER_SIZE + 1];
    char *line;
    static char *container;
    ssize_t b_read;

    if (!container) {
        container = malloc(1);
        container[0] = '\0';
    }
    while ((b_read = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        buffer[b_read] = '\0';
        container = ft_strjoin(container, buffer);
        if(ft_strchr(container, '\n'))
            break;
    }
    line = get_line(container);
    container = move(container);
    return line;
}

char *get_line(char *container) 
{
    char *line;
    int i;

    i = 0;
    while(container[i] && container[i] != '\n')
        i++;
    if(container[i] == '\n')
        i++;
    line = ft_strdup(container, i);
    return line;
}

char *move(char *container)
{
    char *newline_pos;
    char *temp;

    newline_pos = ft_strchr(container, '\n');
    if (newline_pos) {
        temp = ft_strdup(newline_pos + 1, ft_strlen(newline_pos + 1));
        free(container);
        container = temp;
    } else {
        free(container);
        container = NULL;
    }
    return (container);
}

// #include <stdio.h>

// int main() {
//     int fd = open("get_next_line.c", O_RDONLY);
//     char *line;

//     if (fd < 0) {
//         perror("Error opening file");
//         return 1;
//     }

//     // First line
//     line = get_next_line(fd);
//     if (line) {
//         printf("%s", line);
//         free(line); // Free after processing
//     }

//     // Second line
//     line = get_next_line(fd);
//     if (line) {
//         printf("%s", line);
//         free(line); // Free after processing
//     }

//         line = get_next_line(fd);
//     if (line) {
//         printf("%s", line);
//         free(line); // Free after processing
//     }

//     close(fd);
//     return 0;
// }
int main()
{
    int fd = open("get_next_line.c", O_RDONLY);
    char *line;
    line = get_next_line(fd);
    printf("%s", line);
    line = get_next_line(fd);
    printf("%s", line);
    line = get_next_line(fd);
    printf("%s", line);
    line = get_next_line(fd);
    printf("%s", line);
        line = get_next_line(fd);
    printf("%s", line);
    line = get_next_line(fd);
    printf("%s", line);
    line = get_next_line(fd);
    printf("%s", line);
    line = get_next_line(fd);
    printf("%s", line);
        line = get_next_line(fd);
    printf("%s", line);
    line = get_next_line(fd);
    printf("%s", line);
    line = get_next_line(fd);
    printf("%s", line);
    line = get_next_line(fd);
    printf("%s", line);
        line = get_next_line(fd);
    printf("%s", line);
    line = get_next_line(fd);
    printf("%s", line);
    line = get_next_line(fd);
    printf("%s", line);
    line = get_next_line(fd);
    printf("%s", line);
        line = get_next_line(fd);
    printf("%s", line);
    line = get_next_line(fd);
    printf("%s", line);
    line = get_next_line(fd);
    printf("%s", line);
    line = get_next_line(fd);
    printf("%s", line);
        line = get_next_line(fd);
    printf("%s", line);

    free(line);
    close(fd); 
    return 0;
}

