#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int c = 0;
	char *b = str;
	int s;

	while (*b != '\0')
	{
		b++;
		longi++;
	}
	c = longi - 1;
	for (s = 0 ; s <= c ; s++)
	{
		if (s % 2 == 0)
	{
		_putchar(str[s]);
	}
	}
	_putchar('\n');
}
