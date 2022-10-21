#include "main.h"
/**
 * print_diagonal - Prints values diagonally
 *@n: holds value passed to the function
 */
void print_diagonal(int n)
{

int i;
int b;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (b = 0; b < i; b++)
{
_putchar (' ');
}
_putchar (92);
_putchar ('\n');

}

}


else
{
_putchar ('\n');
}

}
