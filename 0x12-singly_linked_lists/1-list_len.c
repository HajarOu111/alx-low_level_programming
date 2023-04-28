#include "lists.h"

/**
 * list_len - a function that returns the number
 * of elements in a linked list_t list.
 * @h: linked list.
 * Return: returns the number of elements in the linked list_t list.
 */

size_t list_len(const list_t *h)
{
size_t n = 0;
while (h != NULL)
{
h = h->next;
n++;
}
return (n);
}
