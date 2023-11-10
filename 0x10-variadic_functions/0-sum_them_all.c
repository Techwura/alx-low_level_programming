#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all assigned paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list bl;
	unsigned int e, sum = 0;


	va_start(bl, n);


	for (e = 0; e < n; e++)
		sum += va_arg(bl, int);


	va_end(bl);


	return (sum);
}
