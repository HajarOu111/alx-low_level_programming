#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: the parameter.
 * Return: Returns the sum of all the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int p;
va_start(ap, n);
p = 0;
for (i = 0; i < n; i++)
p = p + va_arg(ap, int);
va_end(ap);
return (p);
}
