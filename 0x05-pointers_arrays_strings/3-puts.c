#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_puts - prints the string
 *@str: oids the address
 */
void _puts(char *str)
{
	char len = strlen(str);
	char str1[len];

	strcpy(str1, str);
	puts(str1);
}
