#include <stdio.h>
/**
 *main - Entry point
 *Description: Print all the digits
 *Return: Always 0 (Succes)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; ++n)
		putchar(n);
	for (n = 'a'; n <= 'f'; ++n)
		putchar(n);
	putchar('\n');
}
