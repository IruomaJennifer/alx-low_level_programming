#include <stdlib.h>
/**
 * free_grid - function to free a 2-d grid
 * @grid: an array of pointers
 * @height: the number of rows in array
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}

