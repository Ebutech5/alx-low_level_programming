#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: points to number of bit
 * @index: bit to set, starting from 0
 *
 * Return: 1 if it worked
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1 << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (1);
}
