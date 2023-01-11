#include "main.h"
#include <stdlib.h>

/**
  * free_grid-it frees up space created by alloc grid function
  * @grid:int
  * @height:int
  *
  * Return:NULL
  */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
