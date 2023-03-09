#include "main.h"
/**
 * _strlen_recursion - Prints the length of a string,
 *followed by a new line using recursion
 * @s: The string whose length is to be printed
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
int len = 0;
if (*s != '\0')
{
len = _strlen_recursion(s + 1);
return (len + 1);
}
return (0);
}

