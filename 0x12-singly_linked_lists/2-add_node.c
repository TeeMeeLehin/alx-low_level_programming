#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* add_node - function to add a node to the head of a  linked list
* @head: the node to be added
* @str: node string
* Return: list_t
*/
list_t *add_node(list_t **head, const char *str)
{
char *name = strdup(str);
list_t *new_link;
new_link = malloc(sizeof(list_t));
if (!new_link)
{
return (NULL);
}
else
{
new_link->str = name;
new_link->len = _strlen(name);
new_link->next = *head;
*head = new_link;
return (*head);
}
}
