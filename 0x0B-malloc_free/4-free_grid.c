#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid -  frees a 2 dimensional grid previously created
 * @grid: 2D array
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
