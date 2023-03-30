#include "lists.h"
#include <stdlib.h>
/**
* free_list - function to free a linked list
* @head: the linked list
* Return: void
*/

void free_list(list_t *head)
{
list_t *temp;
list_t *current = head;
while (current != NULL)
{
temp = current;
current = current->next;
free(temp);
}
}

