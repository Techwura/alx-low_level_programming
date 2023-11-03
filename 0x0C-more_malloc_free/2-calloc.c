#include "main.h"

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *d;
	unsigned int e;

	if (nmemb == 0 || size == 0)
		return (NULL);
	d = malloc(nmemb * size);
	if (d == NULL)
		return (NULL);
	for (e = 0; e < (nmemb * size); e++)
		d[e] = 0;
	return (d);
}
