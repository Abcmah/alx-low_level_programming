#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: sepatates two number
 * @n: number of args passed to the fx
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		printf("%d%s ", va_arg(ap, int), (i < (n - 1) ? separator : ""));

	printf("\n");
	va_end(ap);
}
