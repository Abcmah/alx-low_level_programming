#include "main.h"
/**
 * _strncpy - copy a strings
 * @dest: holds value passed
 * @src: holds value
 * @n: holds value
 *
 * Return: dup results (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
