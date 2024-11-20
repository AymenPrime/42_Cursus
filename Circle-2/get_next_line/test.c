#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
    char BUFFER[6];
    int fd = open("file.txt", O_RDWR | O_CREAT);
    int readfd = read(fd, BUFFER, 5);
    write(1, BUFFER, readfd);
    BUFFER[readfd] = '\0';
    close(fd);
}