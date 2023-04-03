#include <stdio.h>
#include "lists.h"

/**
* listint_len - function to print d length of a linked list
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

