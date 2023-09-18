#include "main.h"

/**
 * swap_int - swap the two integers
 * @a: value of first integer
 * @b: value of second iteger
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
