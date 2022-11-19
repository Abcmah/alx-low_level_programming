#include "function_pointers.h"
#include <string.h>
/**
 * int_index -  searches for an integer
 * @array: array of value
 * @size: number of elements in array
 * @cmp: pointer to fx
 * Return: element found in an array or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}
	return (-1);
}
