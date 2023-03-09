#include "main.h"
/**
 * _pow_recursion - raises x to the power of y,
 *followed by a new line using recursion
 * @x: the base integer
 * @y: the power integer
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y > 0)
{
int res = (x * _pow_recursion(x, y - 1));
return (res);
}
else
{
return (1);
}
}
