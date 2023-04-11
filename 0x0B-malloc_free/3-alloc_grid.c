#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - 2D array of 0's
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Return: 2D grid
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid_2D = malloc(sizeof(int *) * height);

	if (grid_2D == NULL)
		return (NULL);
	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid_2D[i] = malloc(sizeof(int) * width);
		if (grid_2D[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid_2D[j]);
			}
			free(grid_2D);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid_2D[i][j] = 0;
	}
	return (grid_2D);
}
