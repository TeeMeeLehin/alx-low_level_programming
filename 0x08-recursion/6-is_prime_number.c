#include "main.h"
/**
 * is_prime - function to check whether it's a prime number or not
 *
 * @n: number
 * @i: test number
 * Return: int
 */
int is_prime(int n, int i)
{
	if (n != i && n % i == 0)
		return (0);
	else if (n == i)
		return (1);
	return (is_prime(n, i + 1));
}
/**
 * is_prime_number - function to check whether it's a prime number or not
 *
 * @n: number
 * Return: int
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 2)
		return (n == 2 ? 1 : 0);
	if (n % 2 == 0)
		return (0);
	return (is_prime(n, i));
}
