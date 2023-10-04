#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: character parameter 1
 * @s2: character parameter 2
 *
 * Return: NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1 = (s1 != NULL) ? strlen(s1) : 0;
	size_t len2 = (s2 != NULL) ? strlen(s2) : 0;

	result = (char *)malloc(len1 + len2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		strcpy(result, s1);
	}
	if (s2 != NULL)
	{
		strcat(result, s2);
	}
	return (result);
}
