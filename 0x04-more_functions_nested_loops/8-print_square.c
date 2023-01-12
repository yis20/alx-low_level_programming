#include "main.h"
/**
 * print_square - draws a square using multiple terminal lines and #'s.
 * @n: the number of # to print in each line.
 * Return: nothing
 */
void print_square(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
