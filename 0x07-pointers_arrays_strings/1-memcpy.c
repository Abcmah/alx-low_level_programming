#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest:holds the destination
 *@src: holds memory where is copied
 *@n: holds number of bytes
 *
 *Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
