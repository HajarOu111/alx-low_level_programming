#include "main.h"
#include <string.h>

/**
 * _strlen_recursion -  a function that returns the length of a string.
 * @s: the string to return the length of.
 * Return: returns the length of the string s.
 */

int _strlen_recursion(char *s)
{
return (strlen(s));
_strlen_recursion(s + 1);
}
