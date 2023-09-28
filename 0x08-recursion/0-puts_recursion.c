#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string
 * Return: 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
	}
	else
	{
		printf("%c", *s);
		_puts_recursion(s + 1);
	}
}
