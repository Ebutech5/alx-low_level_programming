#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: memory parameter
 * @s2: memory parameter
 * @n: bytes to memory
 *
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int result_len = 0;
	unsigned int i;
	char *concat;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0' && s2_len < n)
	{
		s2_len++;
	}
	result_len = s1_len + s2_len;
	concat = (char *)malloc((result_len + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < s1_len ; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0 ; i < s2_len ; i++)
	{
		concat[s1_len + i] = s2[i];
	}
	concat[result_len] = '\0';
	return (concat);
}
