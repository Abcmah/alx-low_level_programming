#include "main.h"
#include <math.h>
/**
 *_pow_recursion - finds power
 *@x: holds a number tobe rised
 *@y: holds the power
 *Return: -1(error)  or pow
 */
int _pow_recursion(int x, int y)
{
	int res;


	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
