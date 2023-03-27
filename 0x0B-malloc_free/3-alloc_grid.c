#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *alloc_grid - creates a two dimensional array of elements initialized to 0
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
	/*allocation of memory to each row*/
	p = (int **)malloc(height * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			/*we free each row*/
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
