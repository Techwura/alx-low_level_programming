#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *lone = haystack;
		char *pee = needle;

		while (*lone == *pee && *pee != '\0')
		{
			lone++;
			pee++;
		}
		if (*pee == '\0')
			return (haystack);
	}
	return (0);
}
