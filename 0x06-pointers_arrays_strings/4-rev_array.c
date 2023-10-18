#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *c, int m)
{
	int i;
	int u;

	for (i = 0; i < m--; i++)
	{
		u = c[i];
		c[i] = c[m];
		c[m] = u;
	}
}
