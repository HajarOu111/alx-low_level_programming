#include "main.h"
#include <stdio.h>
#include <stdlib.h>


char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer* - a function that allocates 1024 for a buffer.
 * @file: the name of the file that the buffer is storing chars for.
 * Return: returns the buffer.
 */

char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error:Can't write to %s\n", file);
exit(99);
}
return (buffer);
}
/**
 * close_file - a function that closes a file descriptor.
 * @fd: the file descriptor.
 */

void close_file(int fd)
{
int h;
h = close(fd);
if (h == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close the %d\n", fd);
exit(100);
}
}
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 in success.
 */
int main(int argc, char *argv[])
{
int from, to, r, w;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
r = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (from == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
w = write(to, buffer, r);
if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
r = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(buffer);
close_file(from);
close_file(to);
return (0);
}
