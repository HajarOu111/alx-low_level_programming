#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints it to,
 *  the POSIX standard output.
 *  @filename: A pointer to the name of the file.
 *  @letters: The number of letters in the file to read.
 *  Return: returns 0 if the file is empty.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t a, b, c;
char *buff;
if (filename == NULL)
return (0);
buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0);
a = open(filename, O_RDONLY);
b = read(a, buff, letters);
c = write(STDOUT_FILENO, buff, b);
if (a == -1 || b == -1 || c == -1 || b != c)
{
free(buff);
return (0);
}
free(buff);
close(a);
return (0);
}
