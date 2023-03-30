#include "main.h"

/**
 * *_strncpy - a function that copies a string.
 * @n: the number of bytes to copy.
 * @dest: destination string.
 * @src: source string.
 * Return: Returns a pointer to the resulting string dest.
 */


char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
