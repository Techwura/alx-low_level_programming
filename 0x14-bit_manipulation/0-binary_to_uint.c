#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int aba;
	unsigned int numbre;

	numbre = 0;
	if (!b)
		return (0);
	for (aba = 0; b[aba] != '\0'; aba++)
	{
		if (b[aba] != '0' && b[aba] != '1')
			return (0);
	}
	for (aba = 0; b[aba] != '\0'; aba++)
	{
		numbre <<= 1;
		if (b[aba] == '1')
			numbre += 1;
	}
	return (numbre);
}
