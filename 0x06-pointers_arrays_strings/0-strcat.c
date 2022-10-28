#include "main.h"
/**
 * _strcat - concatenates two strings into one
 * @dest: values passed to the fx
 * @src: holds values passed to the fx
 *
 * Return: the concartinated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
