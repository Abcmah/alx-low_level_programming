#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"
/**
 * main - Entry point ot the program
 * @argc: The number of arguments
 * @argv: An array of arguments.
 * Return: Always 0(success).
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int y, x;
	char *oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	oper = argv[2];
	y = atoi(argv[3]);

	if (get_op_func(oper) == NULL || oper[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*oper == '/' && y == 0) ||
	    (*oper == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(x, y));

	return (0);
}
