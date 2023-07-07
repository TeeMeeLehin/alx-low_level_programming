#include "hash_tables.h"

/**
* key_index - function that returns key index
* @key: the key
* @size: size of the hash table
* Return: index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
