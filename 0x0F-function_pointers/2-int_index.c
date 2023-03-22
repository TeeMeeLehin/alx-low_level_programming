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
if (array != NULL && cmp != NULL)
{
int i, res;
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
res = i;
break;
};
}
return (res);
}
return (0);
}
