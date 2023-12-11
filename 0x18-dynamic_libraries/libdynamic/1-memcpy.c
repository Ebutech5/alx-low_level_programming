#include "main.h"

/**
 * _memcpy - function that copies memory
 * @dest: destination to copy memory
 * @src: source to copy from
 * @n: value of the memory
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
