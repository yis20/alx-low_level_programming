#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int I;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	I = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", I);

	return (0);
}
