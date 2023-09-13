#include "main.h"
/**
 *print_last_digit - function that prints last digit of a number
 *@n: function parameter
 *Return: Always x.
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (n < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
