#include <stdio.h>

/**
 *main - Entry Point
 *
 * Description: Print alphabet in lowercase but !e and !q
 * Return: 0 Always for (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		if (c != 'e' && c != 'q')
			putchar(c);

	putchar('\n');
	return (0);
}
