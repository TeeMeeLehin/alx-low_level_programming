#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node_end - function to add a node to the end of a  linked list
* @head: the node to be added
* @str: node string
* Return: list_t
*/
list_t *add_node_end(list_t **head, const char *str)
{
char *name = strdup(str);
list_t *new_link, *temp = *head;
new_link = malloc(sizeof(list_t));
if (!new_link)
{
return (NULL);
}

new_link->str = name;
new_link->len = _strlen(name);
new_link->next = NULL;

if (*head == NULL)
{
*head = new_link;
return (new_link);
}

while (temp->next)
{
temp = temp->next;
}
temp->next = new_link;
return (new_link);
}
