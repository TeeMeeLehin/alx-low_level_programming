#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits,
 * separated by a comma and a space, in ascending order with two digits,
 * using the putchar() function only. No char type variables are used.
 * Combinations with the same two digits are not printed.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i < 8) /* skip comma after last combination */
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
