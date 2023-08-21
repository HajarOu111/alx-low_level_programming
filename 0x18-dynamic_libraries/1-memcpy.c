#include "main.h"

/**
 * *_memcpy - a function that copies memory area.
 * @n: number of bytes to copy from memory area src.
 * @dest: destination memory area.
 * @src: the memory area to copy from.
 * Return: Returns a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
