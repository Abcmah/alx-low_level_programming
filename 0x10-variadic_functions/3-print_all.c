#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: format list
 */
void print_all(const char * const format, ...)
{
	char *arr;
	char *space = "";
	int i = 0;

	va_list ap;

	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", space, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", space, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", space, va_arg(ap, double));
					break;
				case 's':
					arr = va_arg(ap, char *);
					if (!arr)
						arr = "(nil)";
					printf("%s%s", space, arr);
					break;
				default:
					i++;
					continue;
			}
			space = ", ";
			i++;
		}

	printf("\n");
	va_end(ap);
}
