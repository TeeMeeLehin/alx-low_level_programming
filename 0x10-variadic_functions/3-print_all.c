/**
* print_all - function to print all args passed
* @format: the type of each arg passed
* Return: void
*/
#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
void print_all(const char * const format, ...)
{
va_list ptr;
char *str;
char *frm = "cifs";
unsigned int i;
va_start(ptr, format);
i = 0;
while (format && format[i])
{
if (strchr(frm, format[i]) != NULL && i > 0)
{
printf(", ");
}
switch (format[i])
{
case 'c':
printf("%c", va_arg(ptr, int));
break;
case 'i':
printf("%d", va_arg(ptr, int));
break;
case 'f':
printf("%f", va_arg(ptr, double));
break;
case 's':
str = va_arg(ptr, char *);
if (!str)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
} i++;
}
printf("\n");
}
