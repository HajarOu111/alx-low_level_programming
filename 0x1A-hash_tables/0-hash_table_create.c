#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_create - A function that creates a hash table.
 * @size: The size of the hash table
 * Return: Returns the hash table created.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new_table;
unsigned long int i;
new_table = malloc(sizeof(hash_table_t));
if (new_table == NULL)
return (NULL);
new_table->size = size;
new_table->array = malloc(sizeof(hash_node_t *) * size);
if (new_table->array == NULL)
{
free(new_table);
return (NULL);
}
for (i = 0; i < size; i++)
{
new_table->array[i] = NULL;
}
return (new_table);
}
