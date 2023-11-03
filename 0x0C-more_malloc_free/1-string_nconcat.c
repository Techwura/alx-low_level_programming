#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int q, r, s;
	char *t;

	if (s1 == NULL)
	{
		q = 0;
	}
	else
	{
		for (q = 0; s1[q]; ++q)
			;
	}
	if (s2 == NULL)
	{
		r = 0;
	}
	else
	{
		for (r = 0; s2[r]; ++r)
			;
	}
	if (r > n)
		r = n;
	t = malloc(sizeof(char) * (q + r + 1));
	if (t == NULL)
		return (NULL);
	for (s = 0; s < q; s++)
		t[s] = s1[s];
	for (s = 0; s < y; s++)
		t[s + q] = s2[s];
	t[q + r] = '\0';
	return (t);
}
