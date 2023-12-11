#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - function that searches for any string of a set of bytes
 * @s: strings to search for
 * @accept: location of string to search
 * Return: a pointer if found bytes in s NULL if no byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;
			while (*a != '\0')
			{
				if (*s == *a)
				{
					return (s);
				}
				a++;
			}
		s++;
	}
	return (NULL);
}
