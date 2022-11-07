#include "main.h"

/**
 **_strcat - concatenate strings.
 *@dest: destination to paste
 *@src: sorce of the string
 * Return: desttination
 */
char *_strcat(char *dest, char *src)
{
	int i = 0,  ii;

	while (dest[i])
		i++;
	for (ii = 0; src[ii] != '\0';)
	{
		dest[i++] = src[ii++];
	}
	return (dest);
}
