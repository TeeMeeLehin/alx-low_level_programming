#include "main.h"
/**
 * create_array - function to ...wait for it...
 * create an array lol
 * @size: size of the array
 * @c: array init
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}
char *str;
char *ptr;
str = malloc(sizeof(char) * size);
str[0] = c;
ptr = &str;
return (ptr);
}
