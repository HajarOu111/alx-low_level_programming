#include "hash_tables.h"

/**
 * key_index - A function that gives you a value of a key.
 * @key: The key to return the value of.
 * @size: The size of the array.
 * Return: Returns the value of the key entered.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
