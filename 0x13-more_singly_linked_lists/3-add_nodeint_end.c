#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint_end - function to add node to end of linked list
* @head: the linked list
* @n: the node element to be added
* Return: address of new end node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *neww, *temp = *head;
neww = malloc(sizeof(listint_t));
if (neww)
{
neww->n = n;
neww->next = NULL;

if (*head == NULL)
{
*head = neww;
return (neww);
}
while (temp->next)
{
temp = temp->next;
}
temp->next = neww;
return (neww);
}
else
{
return (NULL);
}
}
