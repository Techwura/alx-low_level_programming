#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size:is the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer allocate new size memory, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *dv;
	unsigned int l, v = new_size;
	char *elf = ptr;

	if (ptr == NULL)
	{
		dv = malloc(new_size);
		return (dv);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	dv = malloc(new_size);
	if (dv == NULL)
		return (NULL);
	if (new_size > old_size)
		v = old_size;
	for (l = 0; l < v; l++)
		dv[l] = elf[l];
	free(ptr);
	return (dv);
}
