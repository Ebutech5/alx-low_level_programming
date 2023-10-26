#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: points to number to clear the bit
 * @index: bit to clear, starting from 0.
 *
 * Return: 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
