#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
* read_textfile - a function that reads text file and prints it
* @filename: text file being read
* @letters: number of letters to be read
* Description: Write a function that reads a text file and print it to
* the POSIX standard output.
*
* Return: w - actual number of bytes reand and printed
* 0 -if fail or NULL
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);

free(buf);
close(fd);
return (w);
}
