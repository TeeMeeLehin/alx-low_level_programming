#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
int num1, num2;
for (num1 = 0; num1 < 100; num1++)
{
for (num2 = num1 + 1; num2 < 100; num2++)
{
/* Print the combination of two numbers */
putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');
/* If not last combination, print comma and space */
if (num1 != 98 || num2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
