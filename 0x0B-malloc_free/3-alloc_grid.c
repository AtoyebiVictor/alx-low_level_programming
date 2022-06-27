#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a 2 dimensional array of integers
 * @width: width of an array
 * @height: height of an array
 *
 * Return: a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **gridl;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	gridl = malloc(height * sizeof(int *));
	if (gridl == NULL)
	{
		free(gridl);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridl[i] = malloc(width * sizeof(int));
		if (gridl[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridl[i]);
			free(gridl);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gridl[i][j] = 0;

	return (gridl);
}
