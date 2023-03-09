#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse,
 *followed by a new line using recursion
 * @s: The string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: int 1 or 0
 */
int is_palindrome(char *s)
{
if (s == "")
{
return (1);
}
else
{
char *r = _print_rev_recursion(s);
if (r == s)
{
return (1);
}
else
{
return (0);
}
}
}
