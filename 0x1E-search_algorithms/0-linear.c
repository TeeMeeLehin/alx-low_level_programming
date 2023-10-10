#include "search_algos.h"

/**
 * linear_search - function to perform a linear search
 * @array: array to be searched
 * @size: length of the array
 * @value: value to be sought
 * Return: index value if successful else -1
 */
int linear_search(int *array, size_t size, int value)
{
size_t count;
int current;

if (array)
{
for (count = 0; count < size; count++)
{
current = array[count];
printf("Value checked array[%ld] = [%d]\n", count, current);
if (current == value)
{
return (count);
}
}
}
return (-1);
}
