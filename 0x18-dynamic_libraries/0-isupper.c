#include "main.h"

/**
 *_isupper - write a function that checks for uppercase character
 *@c: function paramenter
 *Return: 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
