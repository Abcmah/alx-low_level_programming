#include "main.h"

/**
 *print_number - Prints noumbers from 0 - 9
 *
 *
 */
void print_numbers(void)
{
int i;

i = 0;
while (i < 10)
{
_putchar (i + '0');
i++;
}

_putchar ('\n');
}
