#include <stdio.h>
/**
 *main - Entry Point
 *
 * Description: print number 0 to 9
 * Return: Always 0 for Success
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; ++n)
		putchar(n);

	putchar('\n');

	return (0);
}
