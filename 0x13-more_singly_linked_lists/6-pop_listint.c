#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - function to free a linked list
* @head: the linked list
* Return: int
*/

int pop_listint(listint_t **head)
{
int data;
listint_t *current;
data = (*head)->n;
current = *head;
*head = (*head)->next;
free(current);
return (data);
}
