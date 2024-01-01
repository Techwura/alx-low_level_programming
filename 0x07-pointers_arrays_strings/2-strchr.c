#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int ada = 0;

	for (; s[ada] >= '\0'; ada++)
	{
		if (s[ada] == c)
			return (&s[ada]);
	}
	return (0);
}
