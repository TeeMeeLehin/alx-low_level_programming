#include "variadic_functions.h"
/**
* sum_them_all - function to sum all passed args
* @n: the number of passed args
* Return: int
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ptr;
unsigned int res, i;
va_start(ptr, n);
res = 0;
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
res += va_arg(ptr, int);
}
va_end(ptr);
return (res);
}
