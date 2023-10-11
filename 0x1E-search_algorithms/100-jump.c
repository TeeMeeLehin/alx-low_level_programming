#include "search_algos.h"

/**
 * jump_search - function to perform a jump search
 * @array: array to be searched
 * @size: length of the array
 * @value: value to be sought
 * Return: index value if successful else -1
 */
int jump_search(int *array, size_t size, int value)
{
size_t block = sqrt(size), lo, count;
int current;
if (array == NULL || size == 0)
{
return (-1);
}
lo = 0;
printf("Value checked array[%ld] = [%d]\n", lo, array[lo]);
while (lo < size && array[lo] < value)
{
lo += block;
if (lo < size)
{
printf("Value checked array[%ld] = [%d]\n", lo, array[lo]);
}
}
if (lo >= size)
{
return (-1);
}

count = (block <= lo) ? lo - block : 0;
printf("Value found between indexes [%ld] and [%ld]\n", count, lo);
for (; count <= lo && array[count] <= value; count++)
{
current = array[count];
printf("Value checked array[%ld] = [%d]\n", count, array[count]);
if (current == value)
{
return (count);
}
}
return (-1);
}
