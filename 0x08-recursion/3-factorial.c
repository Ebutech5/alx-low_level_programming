#include "main.h"

/**
 * factorial - return factorial of a given number
 * @n: factorial parameter
 * Return: -1 to indicate an error
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		int result = n * factorial(n - 1);
		return (result);
	}
}
