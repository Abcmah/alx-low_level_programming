#include <stdio.h>
/**
 * print_diagsums - a fx tht prints the sum of the two diagonals
 * @a: holds array
 * @size: holds value
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int k = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		j += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		k += a[i];
	}

	printf("%d, %d\n", j, k);
}
