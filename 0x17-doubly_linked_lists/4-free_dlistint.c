#include "lists.h"

/**
* free_dlistint - function to free a D-linked list
* @head: the d-linked list
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;
while (head)
{
current = head;
head = head->next;
free(current);
}
}
