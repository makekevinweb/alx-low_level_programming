#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *alloc_grid - creats a two dimensional array with all elements initialized to 0
 *@width: width of the array
 *@height: height of the array
 *Return: pointer to the two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	int **p = malloc(height * sizeof(int) * width);
	if (*p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
