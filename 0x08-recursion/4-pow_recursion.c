nclude "main.h"
/**
 * _pow_recursion - function name
 * @b: parameter 1
 * @c: parameter 2
 * Return: value of a given number passed to the function
 */
int _pow_recursion(int b, int c)
{
	if (c < 0)
		return (-1);
	if (c == 0)
		return (1);
	return (b * _pow_recursion(b, c - 1));
}
