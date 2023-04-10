#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * _strlen - Prints the length of a string,
 *followed by a new line using recursion
 * @s: The string whose length is to be printed
 *
 * Return: int
 */
int _strlen(char *s)
{
int len = 0;
if (*s != '\0')
{
len = _strlen(s + 1);
return (len + 1);
}
return (0);
}

/**
* append_text_to_file - function to append to a file
* @filename: name of text file
* @text_content: content of file
* Return: int
*/

int append_text_to_file(const char *filename, char *text_content)
{
int n;
int fp;
if (filename == NULL)
{
return (-1);
}
fp = open(filename, O_WRONLY | O_APPEND);
if (fp == -1)
{
return (-1);
}
if (text_content == NULL)
{
close(fp);
return (1);
}
n = write(fp, text_content, _strlen(text_content));
if (n == -1)
{
close(fp);
return (-1);
}
close(fp);
return (1);
}

