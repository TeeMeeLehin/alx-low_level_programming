#include "search_algos.h"

/**
* print_array - funtion to print out elements of an array
* @array: the array
* @start: the start element of the array
* @stop: the stope element of the array
* Return: void
*/
void print_array(int *array, size_t start, size_t stop)
{
while (start <= stop)
{
printf("%d", array[start]);
if (start != stop)
printf(", ");
start++;
}
printf("\n");
}

/**
 * binary_search - function to perform a binary search
 * @array: array to be searched
 * @size: length of the array
 * @value: value to be sought
 * Return: index value if successful else -1
 */
int binary_search(int *array, size_t size, int value)
{
size_t lo = 0, hi = size - 1,  mid;

if (array)
{
while (lo <= hi)
{
printf("Searching in array: ");
print_array(array, lo, hi);
mid = (lo + hi) / 2;
if (array[mid] == value)
{
return (mid);
}
else if (value > array[mid])
{
lo = mid + 1;
}
else
{
hi = mid - 1;
}
}
}
return (-1);
}
