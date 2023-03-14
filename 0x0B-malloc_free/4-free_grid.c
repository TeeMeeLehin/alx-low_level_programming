#include "main.h"
/**
 * free_grid - function to  free allocated mem
 * @grid:  the grid
 * @height: height of the grid
 *
 * Return: char
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
}
