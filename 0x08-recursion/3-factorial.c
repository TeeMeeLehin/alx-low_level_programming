#include "main.h"
/**
 * factorial- Prints the factorial of a given integer,
 *followed by a new line using recursion
 * @n: The integer whose factorial is to be calculated
 *
 * Return: int
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
else
{
int res = (n * factorial(n - 1));
return (res);
}
}
