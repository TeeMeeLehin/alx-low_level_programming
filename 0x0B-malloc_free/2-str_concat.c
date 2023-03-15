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
 * str_concat - function to concatenate a string
 * @s1: the first string
 * @s2: the second string
 *
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
int lent1, lent2, i, j, k = 0;
char *new_str;
if (s1 == NULL && s2 == NULL)
{
new_str[0] = '\0';
return (new_str);
}
lent1 = get_len(s1);
lent2 = get_len(s2);
new_str = malloc((sizeof(char) * lent1) +(sizeof(char) * lent2) +1);
if (new_str == NULL)
{
return (NULL);
}
for (i = 0; i < lent1; i++)
{
*(new_str + i) = *(s1 + i);
}
for (j = lent1; j < (lent1 + lent2); j++)
{
*(new_str + j) = *(s2 + k);
k++;
}
return (new_str);
}
