#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: Pointer to the variable a
 * @b: Pointer to the variable b
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
