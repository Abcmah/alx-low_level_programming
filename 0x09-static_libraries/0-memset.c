#include "main.h"

/**
 **_memset - fills first byte of the memory area pointed
 *@s: perimenter
 *@b: pariment
 *@n: n is unsing int
 * Return: 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
		return (s);
}
