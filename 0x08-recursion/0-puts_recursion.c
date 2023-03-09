#include <main.c>
/**
 * _puts_recursion - Prints a string, followed by a new line using recursion
 * @s: The string to be printed
 *
 * Return: void
 **/
void _puts_recursion(char *s)
{
if (*s != '\0')
{
putchar(*s);
_puts_recursion(s + 1);
}
else
{
putchar('\n');
}

}
