#include <unistd.h>
#include <unistd.h>

int _putchar(char c);
/**
 * main - Entry point of the program
 *
 * Description: This program prints the string "_putchar" followed by a newline
 *              character using only the _putchar function.
 *
 * Return: Always 0 on successful completion
 */
int main(void)
{
char str[] = "_putchar\n";
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
return (0);
}
/**
 * _putchar - writes a character to the standard output
 * @c: the character to write
 *
 * Return: 1 on success, -1 on error.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
