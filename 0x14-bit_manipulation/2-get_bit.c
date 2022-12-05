#include "main.h"

/**
 * get_bit - returns the value of a bit at a given ind
 * @n: bits.
 * @index: index of the bit.
 * Return: bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count;

	if (n == 0 && index < 64)
		return (0);
	for (count = 0; count <= 63; n >>= 1, count++)
	{
		if (index == count)
		{
			return (n & 1);
		}
	}

	return (-1);
}
