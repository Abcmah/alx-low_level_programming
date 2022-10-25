#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *puts2 - prints every other character of a string
 *
 *@str: Holds address passed to the function
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
