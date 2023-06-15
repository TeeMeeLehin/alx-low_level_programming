#include "lists.h"

/**
* get_dnodeint_at_index - function to get node at given index
* @head: the d-linked list
* @index: index n
* Return: nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp = head;
unsigned int count = 0;
while (count < index)
{
temp = temp->next;
count++;
}
if (temp)
{
return (temp);
}
else
{
return (NULL);
}
}
