#include "main.h"
/**
 *print_most_number - Prints numbers
 *
 */
void print_most_number(void)
{
	int n;

	for ( n = 0; n < 9; n++)
	{
		if ( n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
