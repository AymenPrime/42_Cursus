#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H


#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
    char    *get_next_line(int fd);
    char    *get_line(char *container);
    int     ft_strlen(const char *s);
    char    *ft_strjoin(char *s1, char *s2);
    char	*ft_strchr(const char *s, int c);
    char    *ft_strdup(const char *s, size_t n);
    char *move(char *container);
#endif