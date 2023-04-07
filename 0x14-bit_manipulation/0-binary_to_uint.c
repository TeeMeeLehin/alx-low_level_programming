#include <stdlib.h>
#include "main.h"

/**
* _power - function to calculate exponentials
* @n: the base number
* @exp: the exponential
* Return: int
*/

int _power(int n, int exp)
{
int sum = 1;
if (exp == 0)
{
return (sum);
}
else
{
while (exp != 0)
{
sum *= n;
exp--;
}
}
return (sum);
}

/**
 * _strlen - Prints the length of a string,
 *followed by a new line using recursion
 * @s: The string whose length is to be printed
 *
 * Return: int
 */
int _strlen(const char *s)
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
* binary_to_uint - function to convert base 2 to base 10
* @b: the binary string
* Return: base 10 int
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int ans = 0, count = 0, index, len = _strlen(b);
index = len - 1;
if (b == NULL)
{
return (0);
}
while (count < len)
{
if (b[count] == '1')
{
ans += _power(2, index);
}
else if (b[count] != '0')
{
return (0);
}
index--;
count++;
}
return (ans);
}
