#include <ctype.h>

/**
 *_islower - Returns 1 when c is lowercase otherwisw 0
 *@c: Accepts input
 *Return: 1 or 0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
