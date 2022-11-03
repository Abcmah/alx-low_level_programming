#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a new line
 *_puts_recursion - their is a dis
 *@s: holds the string passed
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
