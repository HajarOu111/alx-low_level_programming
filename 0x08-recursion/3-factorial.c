#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the number to return the factorial of.
 * Return: Returns the factorial of a number n.
 */



int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
