#include "main.h"

/**
* _islower - print a function that checks lower case character
*@c: parameter checking a lower case
* Return: 1 if positive and 0 if negative
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
