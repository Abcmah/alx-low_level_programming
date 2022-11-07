#include <ctype.h>
#include "main.h"

/**
 *_isdigit - Returns 1 if c is a digit otherwise 0
 *@c: holds value passed
 *Return: 0 or 1
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
