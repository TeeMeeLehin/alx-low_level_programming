#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strlen - custom function to get string length
* @str: the string
* Return: int
*/

int _strlen(char *str)
{
int i = 0, count = 0;
if (str == NULL)
{
return (0);
}
else
{
while (str[i] != '\0')
{
count++;
i++;
}
return (count);
}
}

/**
* print_list - function to print linked list elements
* @h: the linked list
* Return: size_t
*/
size_t print_list(const list_t *h)
{
int count = 0;
const list_t *n = malloc(sizeof(list_t));
n = h;
while (n != NULL)
{
printf("[%d] ", _strlen(n->str));
printf("%s", n->str);
printf("\n");
count++;
n = n->next;
}
return (count);
}
