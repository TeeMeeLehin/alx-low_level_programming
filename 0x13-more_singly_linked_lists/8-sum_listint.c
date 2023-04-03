#include <stdlib.h>
#include "lists.h"

/**
* sum_listint - function to get sum of all node elements
* @head: the linked list
* Return: sum of all node elements
*/

int sum_listint(listint_t *head)
{
if (!head)
{
return (0);
}
else
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
}

