#include "main.h"

/**
 * alloc_grid - allocate a two-dimensional grid of integers
 * @width: width of an array of integers
 * @height: height of an array  of integers
 * Return: NULL on failure or If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int b, c, d, e;
	int **ss;

	if (width <= 0 || height <= 0)
		return (NULL);
	ss = malloc(height * sizeof(int *));
	if (ss == NULL)
	{
		free(ss);
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		ss[b] = malloc(width * sizeof(int));
		if (ss[b] == NULL)
		{
			for (c = b; c >= 0; c--)
			{
				free(ss[c]);
			}
			free(ss);
			return (NULL);
		}
	}

	for (d = 0; d < height; d++)
	{
		for (e = 0; e < width; e++)
			ss[d][e] = 0;
	}
	return (ss);
}
