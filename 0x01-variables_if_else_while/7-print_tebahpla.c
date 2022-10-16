#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: print alphabet\
 *Return: Always 0 for (success)
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; --n)
		putchar(n);

	putchar('\n');

	return (0);
}
