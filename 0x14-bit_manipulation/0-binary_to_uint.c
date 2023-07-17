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
unsigned int total, power;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			total += power;
	}

	return (total);
}
