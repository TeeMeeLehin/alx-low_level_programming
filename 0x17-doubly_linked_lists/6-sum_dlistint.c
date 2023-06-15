#include "lists.h"

/**
 * sum_dlistint - function to sum all
 * elements of a doubly linked list
 * @head: the given doubly linled list
 * Return: sum of all node elements
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
