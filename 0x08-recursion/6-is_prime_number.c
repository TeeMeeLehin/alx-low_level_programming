#include "main.h"
/**
 * is_p - function to check whether it's a prime number or not
 *
 * @n: number
 * @test: test number
 * Return: int
 */
int is_p(int n, int test)
{
if (test == n)
{
return (1);
}
else if (n != test && (n % test) == 0)
{
return (0);
}
else
{
return (is_p(n, test + 1));
}
}
/**
 * _is_prime_number - function to check whether it's a prime number or not
 *
 * @n: number
 * Return: int
 */
int _is_prime_number(int n)
{
int test = 2;
if (n <= 2)
{
return (n == 2 ? 1 : 0);
}
if (n % test == 0)
{
return (0);
}
else
{
return (is_p(n, test));
}
}
