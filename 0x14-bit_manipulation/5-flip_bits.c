#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int aba, count_a_bit = 0;
	unsigned long int curt;
	unsigned long int e = n ^ m;

	for (aba = 63; aba >= 0; aba--)
	{
		curt = e >> aba;
		if (curt & 1)
			count_a_bit++;
	}

	return (count_a_bit);
}

