#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int aba;
	char *banter;

	aba = 1;
	banter = (char *)&aba;
	return (*banter);
}

