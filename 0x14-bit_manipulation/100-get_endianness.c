#include "main.h"

/**
 * get_endianness - fn checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int temp;
	char *ptr;

	temp = 1;
	ptr = (char *) &temp;

	return ((int)*ptr);
}
