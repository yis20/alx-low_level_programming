#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum oftwoo diagonals of a square.
 * @a: pointer to array.
 * @size; size of array.
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[(size + 1) * b];
		sum2 += a[(size - 1) * (b + 1)];
	}

