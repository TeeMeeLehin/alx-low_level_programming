#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * separated by a comma and a space, in ascending order, using the
 * putchar() function only. No char type variables are used.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0'); /* convert int to char */
if (i < 9) /* skip comma after last digit */
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
