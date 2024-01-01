#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int ink;
	int joe;

	for (ink = 0; ink < 8; ink++)
	{
		for (joe = 0; joe < 8; joe++)
			_putchar(a[ink][joe]);
		_putchar('\n');
	}
}
