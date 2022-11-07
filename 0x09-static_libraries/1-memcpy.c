#include "main.h"

/**
 * *_memcpy - fills first byte of the memory area pointed
 * @dest: pointer to destinition
 * @src: pointer to char sorce
 * @n: unsigned int counter
 *
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
