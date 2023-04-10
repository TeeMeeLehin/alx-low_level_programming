#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
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

/**
* read_textfile - function to read a specified
* number of characters in a text file
* @filename: name of text file
* @letters: specified number of characters
* Return: number of characters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fp = open(filename, O_RDONLY);
size_t n, count = 0;
char buffer[BUFSIZ];
if (fp == -1 || filename == NULL)
{
return (0);
}
while ((n = read(fp, buffer, sizeof(buffer))) > 0 && count < letters)
{
if ((count + n) > letters)
{
n = letters - count;
}
count += write(1, buffer, n);
}
return (count);
}
