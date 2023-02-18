/**
 * main - Entry point
 *
 * Description: Outputs the numbers 0-9 followed by a new line
 * using the putchar() function only.
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
