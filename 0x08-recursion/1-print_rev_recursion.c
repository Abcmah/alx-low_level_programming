#include "main.h"
/**
 *_print_rev_recursion - print reversed string
 *@s: hoids a poiter
 */
void _print_rev_recursion(char *s)
{
	int i = 0;
	char sa[100];

	while (*s != '\0')
	{
		sa[i] = *(s);
		i++;
		s++;
	}
	for (; i >= 0; i--)
	{
		_putchar(sa[i]);
	}
	_putchar('\n');
}
