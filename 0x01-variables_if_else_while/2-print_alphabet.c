#include <stdio.h>
/**
 *main - Entry point of a program
 *
 *Description: Prints alphabets
 *Staring from A -end
 *Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 0; c < 26; ++c)
		putchar('a' + c);
	putchar('\n');

	return (0);
}
