#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @n: the number of strings passed to the function.
 * @separator:  the string to be printed between the strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;
char *str;
va_start(valist, n);
for (i = 0; i < n; i++)
{
str = va_arg(valist, char *);
if (str)
printf("%s", str);
else
{
printf("(nil)");
}
if (separator && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(valist);
}
