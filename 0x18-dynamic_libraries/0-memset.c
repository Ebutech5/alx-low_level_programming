#include "main.h"

/**
 * _memset - function that fills memory
 * @s: pointer to memory to fill with c bytes
 * @b: the value that will be used
 * @n: the number of bytes to fill in the memory
 * Return: value of n.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
