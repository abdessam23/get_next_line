# get_next_line

## Description

The `get_next_line` function reads a line from a file descriptor until a newline character is found. It handles reading from a file descriptor, storing the read data, and extracting lines one by one. This project is implemented in C.

## Usage

### Function Prototype

```c
char *get_next_line(int fd);

Parameters
fd: The file descriptor to read from.
Return Value
Returns a line read from the file descriptor, including the newline character if found.
Returns NULL if there is nothing more to read or if an error occurs.
Example Usage

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main()
{
    int fd = open("file.txt", O_RDONLY);
    char *line;

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return 0;
}
Functions
ft_get_line
Extracts and returns a line from the given string. It allocates memory for the line and ensures it includes the newline character if present.

ft_add
Removes the extracted line from the given string and returns the remaining string. It handles memory allocation and ensures the remaining string is correctly terminated.

read_sv
Reads from the file descriptor and appends the read data to the existing string. It continues reading until a newline character is found or the end of the file is reached.

get_next_line
Combines the above functions to read a line from the file descriptor. It manages the static buffer, reads data, and extracts lines one by one.

Compilation
To compile the project, use the following command:
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=<size> get_next_line.c get_next_line_utils.c -o get_next_line

Replace <size> with the desired buffer size for reading.

License
This project is licensed under the MIT License.
