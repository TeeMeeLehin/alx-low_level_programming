#include <stdlib.h>
#include <unistd.h>
#include "lists.h"
/**
* _nextline - function to write a new line to terminal
* Return: void
*/
void _nextline(void)
{
write(1, &"\n", 1);
}

/**
* _putint - writing an integer to terminal
* @n: the integer
* Return: int
*/
int _putint(int n)
{
int len = 0;
if (n / 10 != 0)
{
len += _putint(n / 10);
}
len += 1;
write(1, &"0123456789"[n % 10], 1);
return (len);
}

/**
* print_listint - function to print integer
* elements of a linked list
* @h: the linked list
* Return: size_t
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h)
{
_putint(h->n);
_nextline();
h = h->next;
count++;
}
return (count);
}
