#include <stdio.h>
#include "main.h"

/**
* print_binary - function to print int as binary
* @n: the base 10 int
* Return: void
*/
void print_binary(unsigned long int n)
{
unsigned int chkr = 2147483648;
unsigned int flag = 0;
while (chkr != 0)
{
if (n & chkr)
{
printf("1");
flag = 1;
}
else
{
if (flag)
{
printf("0");
}
}
chkr >>= 1;
}
if (!flag)
{
printf("0");
}
}
