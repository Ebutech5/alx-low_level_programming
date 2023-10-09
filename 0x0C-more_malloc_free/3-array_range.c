#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: integer parameter
 * @max: int paramemter
 *
 * Return: NULL
 */

int *array_range(int min, int max)
{
	int num_elements = max - min + 1;
	int i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	arr = (int *)malloc(num_elements * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < num_elements ; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
