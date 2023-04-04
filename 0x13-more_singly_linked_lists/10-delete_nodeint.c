#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - function to free a linked list
* @head: the linked list
* Return: int
*/

int pop_listint(listint_t **head)
{
if (*head)
{
int data;
listint_t *current;
data = (*head)->n;
current = *head;
*head = (*head)->next;
free(current);
return (data);
}
else
{
return (0);
}
}

/**
* delete_nodeint_at_index - function to delete node at given index
* @head: the linked list
* @index: index n
* Return: int
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev, *next, *temp;
unsigned int count = 0;
if (index == 0)
{
pop_listint(head);
return (1);
}
temp = *head;
while (index > count + 1)
{
temp = temp->next;
count++;
}
if (!temp)
{
return (-1);
}
prev = temp;
temp = prev->next;
next = temp->next;
prev->next = next;
free(temp);
return (1);
}

