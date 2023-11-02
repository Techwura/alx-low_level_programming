#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int c, d, e = 0, f = 0;
	char *vic;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (c = 0; c < ac; c++)
	{
		for (d = 0; av[c][d]; d++)
			f++;
	}
	f += ac;

	vic = malloc(sizeof(char) * f + 1);

	if (vic == NULL)
		return (NULL);
	for (c = 0; c < ac; c++)
	{
		for (d = 0; av[c][d]; d++)
		{
			vic[e] = av[c][d];
			e++;
		}
		if (vic[e] == '\0')
		{
			vic[e++] = '\n';
		}
	}
	return (vic);
}
