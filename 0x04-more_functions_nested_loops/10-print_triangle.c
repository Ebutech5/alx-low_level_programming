#include "main.h"

/**
 * print_triangle - function printing a triangle using # character
 * @size: function parameter
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1 ; i <= size ; i++)
		{
			for (j = size ; j > 0 ; j--)
			{
				_putchar(' ');
			}
			for (j = 0 ; j < i ; j++)
			{
				_putchar('#');
			}
			if (i == j)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
