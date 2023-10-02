#include "main.h"

/**
 * _atoi - convert string to int
 * @s: parameter
 *
 * Return: 0.
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit;
	int i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
		
		if (result > (2147483647 - digit) / 10)
		{
			return (sign == 1) ? 2147483647 : -2147483648;
		}
		result = result * 10 + digit;
		i++;
	}
	return (result * sign);
}
