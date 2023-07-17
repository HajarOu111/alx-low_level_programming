#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * int binary_to_uint -  a function that converts a binary number
 *  to an unsigned int.
 *  @b : the string that contains 0 and 1.
 *  Return: Returns 0 if b is NULL, returns a number otherwise.
 */
unsigned int binary_to_uint(const char *b)
{
int i, len;
unsigned int n = 0;
if (b == NULL)
return (0);
len = strlen(b);
for (i = 0; i != len; i++)
{
if (b[len - i - 1] == '1')
n += 1 << i;
else if (b[len - i - 1] != '0')
return (0);
}
return (n);
}
