#include <stdio.h>
/**
 *main - Entry point
 *
 * Description: Print all individual digits of base 10
 * beginning from 0,
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{

		putchar(48 + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
