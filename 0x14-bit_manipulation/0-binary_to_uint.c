#include "main.h"

/**
* binary_to_uint - function to convert binary to decimal
* @b: the binary string
* Return: base 10 int
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int i, bit, result = 0;
if (b == NULL)
{
return (0);
}
for (i = 0; b[i]; i++)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
bit = b[i] - '0';
result = result << 1 | bit;
}
return (result);
}
