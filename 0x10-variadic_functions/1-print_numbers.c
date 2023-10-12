#include "variadic_functions.h"

/**
 * print_numbers - print number then followed a new line
 * @separator: string to be printed between numbers
 * @n: number of ints
 * @...: variable of numbers
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list apps;

	va_start(apps, n);
	for (i = 0 ; i < n ; i++)
	{
		num = va_arg(apps, int);
		printf("%d", num);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(apps);
	printf("\n");
}
