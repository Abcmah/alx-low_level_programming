#include "function_pointers.h"
/**
 * print_name - uses a poiter to funtion to print a name
 * @name: hoild a string to be printed
 * @f: pointer to a fx
 * Return: void;
 * f - fx pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
