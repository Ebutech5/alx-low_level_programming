#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - if an int is a prime number
 * @n: number to evaluate
 *
 * Return: 1
 */
int is_prime_number(int n)
{
	if (n < -1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate if prime recur is a number
 * @n: number to calulate
 * @i: iterator
 *
 * Return: 1.
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
