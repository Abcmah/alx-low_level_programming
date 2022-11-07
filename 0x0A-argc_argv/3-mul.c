#include <stdio.h>
int main(int argc, char *argv[])
{
	char *a;
	char *b;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = argv[1];
		b = argv[2];
		printf("%d\n", (*a * *b));
	}

	return (0);
}
