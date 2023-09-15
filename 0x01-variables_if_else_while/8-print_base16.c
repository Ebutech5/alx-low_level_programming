#include <stdio.h>

/**
 * main - write a function that prints all the number base of 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
