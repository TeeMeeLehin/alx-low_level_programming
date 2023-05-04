#include "main.h"

/**
* clear_bit - function to clear bit at given index
* @n: the integer
* @index: the index
* Return: int
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= 32)
{
return (-1);
}
*n &= ~(1 << index);
return (1);
}
