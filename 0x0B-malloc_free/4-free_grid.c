#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *free_grid - frees a 2 dimesionl grid prev
 *created by the alloc_grid function
 *grid: double pointer to multi-dimen
 *height: height of grid
*/
void free_grid(int **grid, int height)
{
int i;
if (grid == '\0' || height <= 0)
{
return;
}
for (i = height - 1; i >= 0; a--)
{
free(grid[i]);
}
free(grid);
}
