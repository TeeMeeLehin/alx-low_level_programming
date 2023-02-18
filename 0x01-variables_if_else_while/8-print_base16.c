/**
 * main - Entry point
 *
 * Description: Outputs the hexadecimal
 * numbers followed by a new line
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
for (i = 97; i <= 102; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
