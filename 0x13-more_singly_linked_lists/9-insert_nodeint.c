#include <stdlib.h>
#include "lists.h"
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
