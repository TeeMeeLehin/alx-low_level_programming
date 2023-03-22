#include "function_pointers.h"
#include <stddef.h>
/**
* array_iterator - callback function to print given name
* @array: given array
* @size: size of given array
* @action: embedded pointer to function
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL)
{
int i, n;
n = (int)size;
for (i = 0; i < n; i++)
{
action(array[i]);
}
}
}
