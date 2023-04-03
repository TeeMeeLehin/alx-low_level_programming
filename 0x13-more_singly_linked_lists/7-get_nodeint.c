#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - function to get node at given index
* @head: the linked list
* @index: index n
* Return: nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
while (head)
{
if (count == index)
{
break;
}
head = head->next;
count++;
}
if (!head)
{
return (0);
}
else
{
return (head);
}
}
