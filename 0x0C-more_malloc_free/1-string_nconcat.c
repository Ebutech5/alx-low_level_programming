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
	unsigned int s2_len = 0;
	unsigned int result_len = 0;
	unsigned int i;

	if (s1 == NULL) s1 = "";
	if (s2 == NULL) s2 = "";
	while (s2[s2_len] != '\0' && s2_len < n)
	{
		s2_len++;
	}
	while (s1[result_len] != '\0')
	{
		result_len += s2_len;
	}
	*concat = (char *)malloc((result_len + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0 ; i < s2_len ; i++)
	{
		concat[result_len - s2_len + 1] = s2[i];
	}
	concat[result_len] = '\0';
	return (concat);
}
