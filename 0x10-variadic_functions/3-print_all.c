#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints whatever
 * @format: lists the types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int b = 0;
	char *rap, *la = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[b])
		{
			switch (format[b])
			{
				case 'c':
					printf("%s%c", la, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", la, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", la, va_arg(list, double));
					break;
				case 's':
					rap = va_arg(list, char *);
					if (!rap)
						rap = "(nil)";
					printf("%s%s", la, rap);
					break;
				default:
					b++;
					continue;
			}
			la = ", ";
			b++;
		}
	}

	printf("\n");
	va_end(list);
}
