#include "main.h"

/**
 * alloc_grid - pointers to 2 dimensional array of int
 * @width: 1st dimension
 * @height: 2nd dimension
 *
 * Return: Null
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0 ; j < i ; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
