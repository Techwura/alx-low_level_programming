#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int v, cv;
	char *conct;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	while (s1[v] != '\0')
		v++;
	while (s2[cv] != '\0')
		cv++;
	conct = malloc(sizeof(char) * (v + cv + 1));


	if (conct == NULL)
		return (NULL);
	v = cv = 0;
	while (s1[v] != '\0')
	{
		conct[v] = s1[v];
		v++;
	}

	while (s2[cv] != '\0')
	{
		conct[v] = s2[cv];
		v++, cv++;

	}
	return (conct);
}
