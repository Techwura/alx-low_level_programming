#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int c, j, i;

	c = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (c < size)
	{
		j = size - c < 10 ? size - c : 10;
		printf("%08x: ", c);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + c + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int u = *(b + c + i);

			if (u < 32 || u > 132)
			{
				u = '.';
			}
			printf("%c", u);
		}
		printf("\n");
		c += 10;
	}
}
