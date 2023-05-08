#include "main.h"

/**
* read_textfile - function to read a specified
* number of characters in a given textFile
* @filename: name of the textFile
* @letters: specified number of characters
* Return: num of characters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fp, n, count = 0;
char *buffer;
if (filename == NULL)
{
return (0);
}
fp = open(filename, O_RDONLY);
buffer = malloc(letters);
n = read(fp, buffer, letters);
count += write(1, buffer, n);
if (fp == -1 || n == -1 || count == -1 || n != count)
{
free(buffer);
return (0);
}
return (count);
}
