#include "main.h"
/**
 * print_times_table - prints the n times table for n, starting with 0.
 * @n: The multiplication table requested.
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i, j, xy;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				xy = (i * j);
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (xy < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((xy % 10) + '0');
				}
				else if (xy >= 10 && xy < 100)
				{
					_putchar(' ');
					_putchar((xy / 10) + '0');
					_putchar((xy % 10) + '0');
				}
				else if (xy >= 100 && j != 0)
				{
					_putchar((xy / 100) + '0');
					_putchar((xy / 10) % 10 + '0');
					_putchar((xy % 10) + '0');
				}
				else
					_putchar((xy % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
