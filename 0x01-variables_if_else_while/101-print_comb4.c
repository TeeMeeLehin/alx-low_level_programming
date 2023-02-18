#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of 3 digits,
 * separated by a comma and a space, in ascending order with 3 digits,
 * using the putchar() function only. No char type variables are used.
 * Combinations with the same two digits are not printed.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
for (k = j + 1; k < 10; k++)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i < 7) /* skip comma after last combination */
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
