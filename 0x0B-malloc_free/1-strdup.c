#include "main.h"
/**
 * get_len - function to get string lengt
 * @str: the array innit?
 *
 * Return: int
 */
int get_len(char *str)
{
int len = 0;
while (*str != '\0')
{
len++;
str++;
}
return (len);
}
/**
 * _strdup - function to duplicate a string
 * @str: the string
 *
 * Return: char
 */
char *_strdup(char *str)
{
int lent, i;
char *new_str;
if (str == NULL)
{
return (NULL);
}
if (*str != '\0')
{
lent = get_len(str);
new_str = malloc((sizeof(char) * lent) +1);
for (i = 0; i < lent; i++)
{
*(new_str + i) = *(str + i);
}
return (new_str);
}
return (NULL);
}
