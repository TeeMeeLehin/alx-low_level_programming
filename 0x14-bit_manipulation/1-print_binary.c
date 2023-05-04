#include "main.h"

/**
* print_binary - function to print decimal as binary
* @n: the base 10 int
* Return: void
*/
void print_binary(unsigned long int n)
{
unsigned long int checker = 2147483648;
int flag = 0;
while (checker)
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
