#include "main.h"
/**
 *print_square - Prints a square from printng many hash simple
 *@size: Holds value passed to tte function
 */

void print_square(int size)
{

int i;
int k;

if (size > 0)
{
for (i = 0; i < size; i++)
{

for (k = 0; k < size; k++)
{
_putchar (35);
}
_putchar ('\n');

}

}

else
{
_putchar ('\n');
}

}
