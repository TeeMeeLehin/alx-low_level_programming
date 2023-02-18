/**
 * main - Entry point
 *
 * Description: Outputs the lowercase alphabets
 * followed by the uppercase alphabets and then  a new line
 * using the putchar() function only.
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
int i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
for (i=65; i<=90; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
