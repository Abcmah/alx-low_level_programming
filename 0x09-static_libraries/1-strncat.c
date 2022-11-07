#include "main.h"

/**
 **_strncat - concatenate strings.
 *@dest: destination
 *@src: soruce
 *@n: n is te counter
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0,  ii;

	while (dest[i])
		i++;
	for (ii = 0; ii < n && src[ii] != '\0';)
	{
		dest[i++] = src[ii++];
	}
	return (dest);
}
