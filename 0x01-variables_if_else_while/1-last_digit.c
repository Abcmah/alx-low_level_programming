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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d %s\n", n, n % 10, ((n % 10) == 0) ? "and is 0" : (((n % 10) > 5) ? "and is greater than 5" : "and is Less than 6 and not 0"));

	return (0);
}
