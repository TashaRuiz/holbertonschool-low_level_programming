#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - frees a two dimensional grid
 *@grid: a pointer to be grid
 *@height: number of rows in the grid
 *
 * Return: info in void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i ++)
	{
		free(grid[i]);
	}
	free(grid);
}
