#include "main.h"

/**
 **_strchr - Return a pointer.
 * @s: sting pointer
 * @c: the carater
 * Return: a poiner of the string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
		{
			return ('\0');
		}
}
