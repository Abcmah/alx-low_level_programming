#include <ctype.h>
#include "main.h"
/**
 *_isupper - Returns 1 if c is Upper case otherwise 0
 *Return: 0 or 1
 *@c: holds values passed 
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
