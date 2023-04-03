#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "lists.h"

/**
* print_listint - function to print integer
* elements of a linked list
* @h: the linked list
* Return: size_t
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
