#include "main.h"

/**
 * get_endianness - check endianness
 *
 * Return: 0 if big, 1 if little-endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return ((*byte == 1) ? 1 : 0);
}
