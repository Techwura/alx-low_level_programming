#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *amg;
	int c, e = 0;

	if (str == NULL)
		return (NULL);
	c = 0;
	while (str[c] != '\0')
		c++;
	amg = malloc(sizeof(char) * (c + 1));

	if (amg == NULL)
		return (NULL);

	for (e = 0; str[e]; e++)
		amg[e] = str[e];
	return (amg);
}
