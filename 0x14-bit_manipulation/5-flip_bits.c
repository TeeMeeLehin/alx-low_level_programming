#include "main.h"

/**
* flip_bits - function to count the number of bits -
* that needs to be flipped to make n equal m
* @n: the first integer
* @m: the second integer
* Return: int
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int exclusive_bits = n ^ m;
while (exclusive_bits)
{
count += exclusive_bits & 1;
exclusive_bits = exclusive_bits >> 1;
}
return (count);
}
