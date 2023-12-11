#include "main.h"

/**
*_abs - function that prints absolute value of integer
*@x: function parameter
* Return: +
*/

int _abs(int x)
{
	if (x < 0)
		return (-x);
	else if (x >= 0)
	{
		return (x);
	}
	return (0);
}
