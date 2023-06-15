#include "lists.h"

/**
* add_dnodeint_end - function to add node to the end of D-linked list
* @head: the D-linked list
* @n: the node element to be added
* Return: address of new head node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *temp = *head;
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{

while (temp->next)
{
temp = temp->next;
}

temp->next = new_node;
new_node->prev = temp;
}
return (new_node);
}
