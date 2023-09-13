#include "main.h"
#include <stdio.h>

/**
 *times_table - function that prints 9 times table, starting with 0
 * Retun: 0
 */

void times_table(void)
{
	int i, j, sum;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			sum = i * j;
			if (j == 0)
				printf("2%d, ", sum);
			else
			{
				printf("%2d", sum);
				if (j != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
