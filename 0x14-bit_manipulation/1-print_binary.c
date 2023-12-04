#include "main.h"

/**
 * _pow - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int numbre;
	unsigned int aba;

	numbre = 1;
	for (aba = 1; aba <= power; aba++)
		numbre *= base;
	return (numbre);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divi, checkcheck;
	char frankaa;

	frankaa = 0;
	divi = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divi != 0)
	{
		check = n & divi;
		if (checkcheck == divi)
		{
			frankaa = 1;
			_putchar('1');
		}
		else if (frankaa == 1 || divi == 1)
		{
			_putchar('0');
		}
		divi >>= 1;
	}
}
