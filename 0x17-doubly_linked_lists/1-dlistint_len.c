#include "lists.h"

/**
* dlistint_len- function to print d length of a doubly linked list
* @h: the doubly linked list
* Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}
