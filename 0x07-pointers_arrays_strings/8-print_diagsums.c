#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int suma1, suma2, p;

	suma1 = 0;
	suma2 = 0;

	for (p = 0; p < size; p++)
	{
		suma1 = suma1 + a[p * size + p];
	}
	for (p = size - 1; p >= 0; p--)
	{
		suma2 += a[p * size + (size - p - 1)];
	}
	printf("%d, %d\n", suma1, suma2);
}

