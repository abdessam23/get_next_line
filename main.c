#include "get_next_line.h"
#include <fcntl.h>
int main()
{

    char *b;
    int fd;
    fd = open("test.txt", O_RDWR | O_CREAT |O_TRUNC ,0777);

    b = get_next_line(fd);
}