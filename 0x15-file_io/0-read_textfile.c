#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints it
 *  to the POSIX standard output.
 *  @filename: the name of the file.
 *  @letters: the number of letters printed.
 *  Return: returns the number of letters printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buf;
ssize_t n, w;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * (letters));
n = read(fd, buf, letters);
if (n == -1)
return (0);
w = write(STDOUT_FILENO, buf, n);
close(fd);
free(buf);
return (w);
}
