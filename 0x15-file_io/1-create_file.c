#include "main.h"

/**
 * create_file -  a function that creates a file.
 * @filename: the name of the file created.
 * @text_content: the content of the file.
 * Return: 1 if success, -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
int fd, rwr, nl;
if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content == NULL)
text_content = "";
for (nl = 0; text_content[nl]; nl++)
{
rwr = write(fd, text_content, nl);
if (rwr == -1)
return (-1);
close(fd);
}
return (1);
}
