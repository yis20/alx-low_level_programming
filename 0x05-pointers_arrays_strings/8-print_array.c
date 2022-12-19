#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: array name
 * @n: is the number of elements of the array to be printed
 * Return: a and n inputs or entries
 */
void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < (n - 1); y++)
	{
		printf("%d, ", a[y]);
	}
	if (y == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
		printf("\n");
}
