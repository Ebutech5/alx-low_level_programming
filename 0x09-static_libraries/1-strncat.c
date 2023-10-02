#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings
 * @dest: destination of string
 * @src: source of string
 * @n: parameter int
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
