#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - Entry point
 *
 *Return: Always 0 for succiss
 */
int main(void)
{
	int n;
	int mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	mod = n % 10;

	if ((n % 10) == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else if ((n % 10) != 0)
	{
		if ((n % 10) > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, mod);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod);
	}

	return (0);
}
