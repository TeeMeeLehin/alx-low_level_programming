#include "hash_tables.h"

/**
* hash_table_set - function to insert into hash table
* @ht: the hash table
* @key: new node key
* @value: new node value
* Return: int
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *item;
unsigned long int index;
char *dupl;

if (ht == NULL || key == NULL || strlen(key) == 0)
{
return (0);
}

dupl = strdup(value);
if (dupl == NULL)
{
return (0);
}
index = key_index((const unsigned char *)key, ht->size);
item = malloc(sizeof(hash_node_t));
if (item == NULL)
{
return (0);
}

item->key = strdup(key);
item->value = dupl;
item->next = ht->array[index];
ht->array[index] = item;

return (1);
}
