#include "search_algos.h"

/**
 * interpolation_search - function to perform a interpolation search
 * @array: array to be searched
 * @size: length of the array
 * @value: value to be sought
 * Return: index value if successful else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
if (array)
{
size_t low = 0, high = size - 1;
while (low < high)
{
size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
if (pos > size)
{
printf("Value checked array[%ld] is out of range\n", pos);
return (-1);
}
printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
if (array[pos] == value)
{
return (pos);
}
else if (value > array[pos])
{
low = pos + 1;
}
else
{
high = pos - 1;
}
}
}
return (-1);
}
