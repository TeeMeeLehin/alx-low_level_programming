#include <unistd.h>

/**
* _putchar - function to write a character to terminal
* @c: the character
* Return: zero
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
