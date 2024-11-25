#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>0
#include <string.h>
int main()
{
    char BUFFER[50];
    int fd = open("file.txt", O_RDWR | O_CREAT, 0644);
    write(fd, "adadadadadadad", 15);
    close(fd);
    fd = open("file.txt", O_RDONLY);
    int readfd;
    readfd = read(fd, BUFFER, 5);
    BUFFER[readfd] == '\0';
    printf("%s", BUFFER);
    close(fd);
}