#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints every element of the linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t b = 0;

	while (u)
	{
		if (!u->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", u->len, u->str);
		u = u->next;
		b++;
	}
	return (b);
}
