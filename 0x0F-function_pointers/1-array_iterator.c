#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints each array elem on a newl
 * @array: array to be iterrated
 * @size: number of elements to be printed
 * @action: pointer to a fx
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (array == NULL || action == NULL)
		return;

	for (count = 0; count < size; count++)
	{
		action(array[count]);
	}
}
