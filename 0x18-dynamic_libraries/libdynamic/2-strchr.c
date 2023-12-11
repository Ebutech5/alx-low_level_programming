#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to input string
 * @c: character to search
 * Return: Null
 */

char *_strchr(char *s, char c)
{
	int string;

	for (string = 0 ; s[string] >= '\0' ; string++)
	{
		if (s[string] == c)
			return (s + string);
	}
	return ('\0');
}
