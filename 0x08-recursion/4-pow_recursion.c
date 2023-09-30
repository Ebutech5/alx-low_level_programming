#include "main.h"

/**
 * _pow_recursion - a function that returns value of x raised to power of y
 * @x: parameter to raise
 * @y: parameter to return
 * Return: y if lower than 0 otherwise return -1
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		int result = x *  _pow_recursion(x, y - 1);
			return (result);
	}
}
