#include "main.h"
/**
 *print_last_digit - Returns last digit of a givin output
 *@n: Holds the value passed
 *Return: last digit of n
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	_putchar(last);

	return (last);
}
