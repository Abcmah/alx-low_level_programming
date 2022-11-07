#include "main.h"

/**
 *_strcmp  - compare strings.
 *@s1: a sstring to compare
 *@s2: a stirng to compare
 * Return: a string or 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
