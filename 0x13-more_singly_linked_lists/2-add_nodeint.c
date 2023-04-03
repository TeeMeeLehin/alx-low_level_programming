#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint - function to add node to head of linked list
* @head: the linked list
* @n: the node element to be added
* Return: address of new head node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *neww;
neww = malloc(sizeof(listint_t));
if (neww)
{
neww->n = n;
neww->next = *head;
*head = neww;
return (*head);
}
else
{
return (NULL);
}
}
