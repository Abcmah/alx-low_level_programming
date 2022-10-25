#include "main.h"

/**
 *swap_int - Swap value of a to that of b
 *@a: hoids an address of var a
 *@b: holds an address of var b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
