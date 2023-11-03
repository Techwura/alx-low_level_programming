#include <stdlib.h>
#include "main.h"

/**
 *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *rs;
	int g, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	rs = malloc(sizeof(int) * size);

	if (rs == NULL)
		return (NULL);

	for (g = 0; min <= max; g++)
		rs[g] = min++;
	return (rs);
}
