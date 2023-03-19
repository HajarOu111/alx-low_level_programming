#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{int i;
int j;
int h;
for (i = 0; i < 8; i++)
{
for (j = 1; j < 9; j++)
{
for (h = 2; h < 10; h++)
{
if (i != j && j != h && i != h)
{
if (i < j && j < h)
{
putchar(i + '0');
putchar(j + '0');
putchar(h + '0');
if (i + j + h != 24)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}

