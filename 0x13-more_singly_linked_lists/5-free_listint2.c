#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - function to free a linked list
* @head: the linked list
* Return: void
*/

void free_listint2(listint_t **head)
{
listint_t *current;
while (*head)
{
current = *head;
*head = (*head)->next;
free(current);
}
*head = NULL;
}
