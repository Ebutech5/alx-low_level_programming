#include "main.h"

/**
 * _strspn - function that gets the length of prefix substring
 * @s: string to pointer
 * @accept: bytes to return
 * Return: bytes to accept and return
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				count++;

				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
