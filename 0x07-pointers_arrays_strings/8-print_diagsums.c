#include "main.h"

/**
 *  print_diagsums - a function that prints the sum of the two diagonals
 *   of a square matrix of integers.
 *   @size: the size of the square matrix.
 *   @a: array.
 */

void print_diagsums(int *a, int size)
{
int c;
int sum1 = 0;
int sum2 = 0;
for (c = 0; c < size; c++)
{
sum1 = sum1 + a[c * size + c];
}
for (c = size - 1; c >= 0; c--)
{
sum2 = sum2 + a[c * size + (size - c - 1)];
}
printf("%d,%d\n", sum1, sum2);
}

