#include "main.h"


/**
 * *_strncat - a function that concatenates two strings.
 * @dest: the destination string.
 * @src: the source string.
 * @n: number of bytes of srr to concatenate.
 * Return: returns a pointer to the resulting string dest.
 */



char *_strncat(char *dest, char *src, int n)
{
int destlen = 0;
int srclen = 0;
int i;
for (i = 0; dest[i] != '\0'; i++)
{
destlen++;
}
for (i = 0; src[i] != '\0'; i++)
{
srclen++;
}
for (i = 0; i < n; i++)
{
dest[destlen + i] = src[i];
}
return (dest);
}
