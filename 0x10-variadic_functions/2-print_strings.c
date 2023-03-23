#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
* print_strings - function to print all passed args
* @separator: the delimiter
* @n: the number of passed args
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ptr;
char *str;
unsigned int i;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
str = va_arg(ptr, char *);
if (separator != NULL && i > 0)
{
printf("%s", separator);
}
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
};
}
va_end(ptr);
printf("\n");
}
