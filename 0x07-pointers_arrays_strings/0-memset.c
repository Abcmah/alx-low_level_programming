#include "main.h"
/**
 *_memset - fill a block of memory with a specific value
 *@s: holds address of memory to be filled
 *@b: holds value
 *@n: holds value of bytes to be changed
 *
 *Return: alatered array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
