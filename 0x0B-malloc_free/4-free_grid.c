#include "main.h"
/**
 * free_grid - free 2D grid created in alloc_grid and remove memory alloc
 * @grid: pinter to pointer
 * @height: height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int ss;

	for (ss = 0; ss < height; ss++)
	{
		free(grid[ss]);
	}
	free(grid);
}
