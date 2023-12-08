#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_binary - that prints the binary representation of a number
 * @n: number
 * Description: Write a function that prints
 * Return:
 */

void print_binary(unsigned long int n)
{
	unsigned long int sup = 2, rep = 0;

	while (sup <= n && rep < 62)
	{
		sup = sup << 1;
		rep++;
	}

	if (rep != 62)
		sup = sup >> 1;

	while (sup != 0)
	{
		if ((sup & n) != 0)
		{
			rep++;
			_putchar('1');
		}
		else
		{
			rep++;
			_putchar('0');
		}
		sup = sup >> 1;
	}
}
