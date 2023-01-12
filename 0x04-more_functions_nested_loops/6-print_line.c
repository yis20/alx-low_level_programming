#include "holberton.h"
/**
 * print_line - draws a straight line (n) characters long.
 * @n: the number of underscores to print.
 */
void print_line(int n)
{
	int x;

	if (n > 0)
		for (x = 0; x < n; x++)
			_putchar('_');
	_putchar('\n');
}
