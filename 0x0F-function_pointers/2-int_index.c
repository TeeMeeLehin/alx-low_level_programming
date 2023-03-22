#include "function_pointers.h"
#include <stddef.h>
/**
* int_index - the index function
* @array: given array
* @size: size of given array
* @cmp: embedded pointer to function
* Return: int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i, res;
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
res = i;
break;
}
res = -1;
}
return (res);
}
