#include "main.h"

/**
 * *_strstr - a function that locates a substring.
 * @haystack: the string to find the the first occurrence of the substring in.
 * @needle: the substring to find the first occurrence of.
 * Return: Returns a pointer to the beginning of the located substring,
 *  or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
unsigned int n = 0;
int i;
while (*haystack)
{
for (i = 0; needle[i] != '\0'; i++)
{
if (*haystack == needle[i])
{
n++;
break;
}
return (needle);
}
}
return ('\0');
}

