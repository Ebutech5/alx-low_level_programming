#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: string to be printed
 * @n: number of strings
 * @...: variable number of strings
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list apps;
	unsigned int i;
	char *str;

	va_start(apps, n);
	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(apps, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(apps);
	printf("\n");
}

