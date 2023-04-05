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
listint_t *temp, *newnode;
unsigned int count = 0;
newnode = malloc(sizeof(listint_t));
if (!newnode)
{
return (NULL);
}
temp = *head;
while (count < idx - 1)
{
temp = temp->next;
count++;
}
if (!temp)
{
return (NULL);
}
newnode->n = n;
newnode->next = temp->next;
temp->next = newnode;
return (newnode);
}
