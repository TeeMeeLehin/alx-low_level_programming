#include "main.h"

/**
* set_bit - function to set bit at given index to 1
* @n: the integer
* @index: the index
* Return: int
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= 32)
{
return (-1);
}
*n |= (1 << index);
return (1);
}
