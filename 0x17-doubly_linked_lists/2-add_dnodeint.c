#include "lists.h"

/**
* add_dnodeint - function to add node to head of D-linked list
* @head: the D-linked list
* @n: the node element to be added
* Return: address of new head node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node)
{
new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;
*head = new_node;
return (*head);
}
else
{
return (NULL);
}
}
