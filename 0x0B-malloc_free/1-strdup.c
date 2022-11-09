#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: hold an poiter passed
 * Return: value of arr
 */
char *_strdup(char *str)
{
	char *arr;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (arr == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		arr[r] = str[r];

	return (arr);
}
