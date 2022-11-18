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
	unsigned int count;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]))
			return (count);
	}
	return (-1);
}
