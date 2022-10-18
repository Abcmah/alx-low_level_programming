#include "main.h"

/**
 *main - Entry point
 *Description: Prints _putchar
 *Return: Always 0 (Success)
 */
int main(void)
{
	char line[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(line[i]);
	}
	_putchar('\n');

	return (0);
}
