#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>
int main()
{

    char *b;
    int fd;
    fd = open("test.txt", O_RDONLY ,0777);

    while( (b = get_next_line(fd) )!= NULL)
    {
        printf("%s",b);
        free(b);
    }
    close (fd);
    return 0;
}

