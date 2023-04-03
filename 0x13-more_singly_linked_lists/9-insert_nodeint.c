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

/**
* insert_nodeint_at_index - function to insert node at given index
* @head: the linked list
* @idx: index n
* @n: new node element
* Return: new node address
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *prev, *next, *newn, *temp;
unsigned int count = 0;
newn = malloc(sizeof(listint_t));
if (!newn)
{
return (NULL);
}
temp = *head;
while (temp)
{
if (idx == 0)
{
add_nodeint(head, n);
return (add_nodeint(head, n));
}
if (count == idx - 1)
{
break;
}
temp = temp->next;
count++;
}
if (!temp)
{
return (NULL);
}
prev = temp;
next = prev->next;
newn->n = n;
newn->next = next;
prev->next = newn;
return (newn);
}
