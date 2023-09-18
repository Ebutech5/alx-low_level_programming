#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int i;
	char k;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = 0 ; i < count / 2 ; i++)
	{
		k = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = k;
	}
}
