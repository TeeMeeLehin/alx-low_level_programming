#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
* print_numbers - function to print all passed args
* @separator: the delimiter
* @n: the number of passed args
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ptr;
unsigned int i;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
if (separator != NULL)
{
if (i == n - 1)
{
printf("%d\n", va_arg(ptr, int));
}
else
{
printf("%d%s", va_arg(ptr, int), separator);
}
}
else
{
if (i == n - 1)
{
printf("%d\n", va_arg(ptr, int));
}
else
{
printf("%d", va_arg(ptr, int));
};
};
}
va_end(ptr);
}
