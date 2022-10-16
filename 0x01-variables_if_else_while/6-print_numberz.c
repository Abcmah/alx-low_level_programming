#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Print number 0-9
 *Return: 0 Always fro succss
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; ++n)
		putchar('0' + n);

	putchar('\n');

	return (0);
}
