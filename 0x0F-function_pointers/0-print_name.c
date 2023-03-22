#include "function_pointers.h"
#include <stddef.h>
/**
* print_name - callback function to print given name
* @name: name char
* @f: pointer to a function
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
(*f)(name);
}
}
