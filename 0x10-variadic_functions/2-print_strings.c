#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: comma
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *arr;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		arr = va_arg(ap, char *);
		if (!arr)
			printf("(nil)");
		else
		{
			printf("%s", arr);
			if (i != (n - 1) && separator != NULL)
				printf("%s ", separator);
		}
	}

	printf("\n");

	va_end(ap);
}
