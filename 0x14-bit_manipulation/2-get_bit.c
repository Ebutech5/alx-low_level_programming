#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: the number to get bit from
 * @index: the index of bit to return
 *
 * Return: value of bit at index or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index) & 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (bit);
}
