/**
 * main - Entry point
 *
 * Description: Outputs the numbers 0-9 followed by a new line
 * using the printf() function.
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
printf("%d", i);
}
printf("\n");
return (0);
}
