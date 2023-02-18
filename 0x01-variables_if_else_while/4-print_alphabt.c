/**
 * main - Entry point
 *
 * Description: Outputs the lowercase alphabets
 * (excluding q and e) followed by a new line
 * using the putchar() function only.
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
int i;
for (i = 97; i <= 122; i++)
{
if (i == 101 || i == 113)  /* Skip 'e' and 'q' */
continue;
putchar(i);
}
putchar('\n');
return (0);
}
