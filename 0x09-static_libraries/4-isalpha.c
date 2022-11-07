#include <ctype.h>

/**
 *_isalpha - Returns 1 if is a letter otherwise 0
 *@c: holds value passed
 *Return: 1 or 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
