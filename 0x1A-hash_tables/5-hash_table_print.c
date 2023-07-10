#include "hash_tables.h"

/**
* hash_table_print - function to print content
* of a given hash table
* @ht: the hash table
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
unsigned long int i;
int flag = 0;

if (ht == NULL)
{
return;
}

printf("{");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
if (node)
{
if (flag == 1)
{
printf(", ");
}
printf("'%s': '%s'", node->key, node->value);
flag = 1;
node = node->next;
if (node != NULL)
{
printf(", ");
}
}
}
printf("}\n");
}
