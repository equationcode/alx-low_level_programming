#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid of the integer
 * @height: height of the integer
 *
 * Return: 0 on success
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
