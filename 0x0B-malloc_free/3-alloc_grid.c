#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **vee;
	int c, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	vee = malloc(sizeof(int *) * height);

	if (vee == NULL)
		return (NULL);

	for (c = 0; c < height; c++)
	{
		vee[c] = malloc(sizeof(int) * width);
		if (vee[c] == NULL)
		{
			for (; c >= 0; c--)
				free(vee[c]);

			free(vee);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (m = 0; m < width; m++)
			vee[c][m] = 0;
	}
	return (vee);
}
