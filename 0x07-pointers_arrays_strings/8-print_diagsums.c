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
	int sum1 = 0, sum2 = 0;
		for (int i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}

	int num_digits = 0;
	int num = sum1;
		while (num > 0)
	{
		num /= 10;
		num_digits++;
	}
	for (int i = num_digits - 1; i >= 0; i--)
	{
		int digit = sum1 / (int)pow(10, i);
			_putchar(digit + '0');
		sum1 -= digit * (int)pow(10, i);
	}
	_putchar(',');
	_putchar(' ');
	num_digits = 0;
	num = sum2;
	while (num > 0)
	{
		num /= 10;
		num_digits++;
	}
	for (int i = num_digits - 1; i >= 0; i--)
	{
		int digit = sum2 / (int)pow(10, i);
			_putchar(digit + '0');
		sum2 -= digit * (int)pow(10, i);
	}
	_putchar('\n');
}
