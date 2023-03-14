#include "main.h"
/**
 * alloc_grid - function to allocate mem for 2D grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: char
 */
int **alloc_grid(int width, int height)
{
int **grid = malloc(height * sizeof(int));
int i, j, k;
if (height > 0 && width > 0)
{
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
}
for (j = 0; j < height; j++)
{
for (k = 0; k < width; k++)
{
grid[j][k] = 0;
}
}
return (grid);
}
return (NULL);
}
