/**
 * main - Entry point
 *
 * Description: Outputs the lowercase alphabets followed by a new line
 * using the putchar() function only.
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
int i;
for (i = 122; i >= 97; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
