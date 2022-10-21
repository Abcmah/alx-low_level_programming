#include "main.h"
/**
 *print_most_number - Prints numbers
 *
 */
void print_most_number(void)
{
int i;

i = 0;
while (i < 10)
{
if (i != 2 && i != 4)
{
_putchar (i + '0');
}
i++;
}

_putchar ('\n')
}
