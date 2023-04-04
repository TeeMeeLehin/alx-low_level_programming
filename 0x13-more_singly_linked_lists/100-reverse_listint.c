#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
*listint_len - function to print d length of a linked list
* @h: the linked list
* Return: size_t
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}

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

/**
* reverse_listint - function to reverse a linked list
* @head: the linked list
* Return: node
*/

listint_t *reverse_listint(listint_t **head)
{
int len = listint_len(*head);
size_t counter = len - 1;
while (1)
{
printf("%d\n", get_nodeint_at_index(*head, counter)->n);
if (counter == 0)
{
break;
}
counter--;
}
return (get_nodeint_at_index(*head, len - 1));
}
