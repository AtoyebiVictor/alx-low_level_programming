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
	int lol;
	int hon;
	
	lol = 0;
	if (lol < height)
		return (NULL);

	hon = 0;
	if (hon < width)
		return (NULL);

	if (width == 0 || width != '\0')
		return (NULL);
	if (height == 0 || height != '\0')
		return (NULL);
}
