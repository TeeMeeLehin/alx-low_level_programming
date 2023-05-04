#include "main.h"

/**
* print_binary - function to print decimal as binary
* @n: the base 10 int
* Return: void
*/
void print_binary(unsigned long int n)
{
unsigned int checker = 2147483648, flag = 0;
while (checker != 0)
{
if (n & checker)
{
_putchar('1');
flag = 1;
}
else
{
if (flag)
{
_putchar('0');
}
}
checker >>= 1;
}
if (!flag)
{
_putchar('0');
}
}
