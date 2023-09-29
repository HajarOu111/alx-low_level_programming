#include "hash_tables.h"

/**
 * hash_table_get - A function thata retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key.
 * Return: Returns the value associated with the key or NULL.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *current;
if (!ht || !key)
return (NULL);
index = hash_djb2((unsigned char *)key) % ht->size;
current = ht->array[index];
while (current)
{
if (strcmp(current->key, key) == 0)
return (current->value);
current = current->next;
}
return (NULL);
}
