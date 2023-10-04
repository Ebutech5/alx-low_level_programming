#include "main.h"

/**
 * _strdup - point to new allocated space in memory
 * @str: string parameter
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	dup = (char *)malloc(strlen(str) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}
