#include "main.h"
/**
 *factorial - finds factors of a number
 *@n: Passed number
 *Return: -1(error) else factor
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
