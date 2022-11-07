#include <stdio.h>
#include <stdlib.h>
/**
 *main - enter point
 *@argc: number of args
 *@argv: holds args
 *Return 1 for no arg
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", (a * b));
	}

	return (0);
}
