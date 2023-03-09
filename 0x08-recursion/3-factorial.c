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
if (n == 1)
{
return (0);
}
else
{
int res = (n * factorial(n - 1));
return (res);
}
}
