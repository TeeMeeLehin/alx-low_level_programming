#include <stdio.h>
#include "main.h"

/**
* get_bit - function to get bit at particular index
* @n: the integer
* @index: the index
* Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
return ((n >> index) & 1);
}
