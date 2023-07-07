#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key.
 * @key: A key to get the index.
 * @size: Size of the array.
 *
 * Return: Returns the index at which the key/value pair should be stored
 * in the array of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
