#include "main.h"
#include <stdlib.h>
/**
 *create_array - create array of size size and assign char c
 *@size: the size of the memory to print
 *@c: holds te char passed
 *Return: array or NULL
 *
 **/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
