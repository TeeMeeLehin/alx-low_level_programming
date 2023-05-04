#include "main.h"

/**
* get_endianness - function to determine endianness
* Return: int
*/

int get_endianness(void)
{
int n = 1;
char *byte = (char *) &n;
return ((int) *byte);
}
