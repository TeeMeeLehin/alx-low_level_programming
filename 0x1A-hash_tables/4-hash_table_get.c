#include "hash_tables.h"

/**
* hash_table_get - function to retrieve a node
* @ht: the hash table
* @key: node key
* Return: the node value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned long int index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];
while (node && strcmp(ht->array[index]->key, key) != 0)
{
node = node->next;
}
if (node)
{
return (node->value);
}
else
{
return (NULL);
}
}
