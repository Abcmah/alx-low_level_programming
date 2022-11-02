#include "main.h"
/**
 * _strpbrk -fx searching a string for any of a set of bytes
 * @s: holds the string
 * @accept: paramenter
 *
 * Return: a address or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}

		}
		s++;
	}
	return (NULL);
}
