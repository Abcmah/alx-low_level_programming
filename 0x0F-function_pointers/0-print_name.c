#include <stdio.h>
#include "function_poiters.h"
/**
 * print_name - uses a poiter to funtion to print a name
 * @name: hoild a string to be printed
 * f: pointer to a fx
 * Return: void;
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
