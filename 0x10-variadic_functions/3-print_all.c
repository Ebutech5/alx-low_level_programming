#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: list of types of argument passed
 * @...: variable name
 *
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list apps;

	va_start(apps, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(apps, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(apps, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(apps, double));
					break;
				case 's':
					str = va_arg(apps, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	va_end(apps);
	printf("\n");
}
