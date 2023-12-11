#include "main.h"

/**
 * _isdigit - write a function that checks digit (0 through 9)
 *@c: function parameter
 * Return: 1 if digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
