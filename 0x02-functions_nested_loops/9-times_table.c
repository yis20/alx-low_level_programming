#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: nothing on success
 */
void times_table(void)
{
	int y = 0, t = 9, k = 0;

	while (k <= 9)
	{
		while (y <= t)
		{
			int d = k * y;

			if (y != 0)
			{
				_putchar(',');
				if (d < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}

			if (d < 10)
				_putchar(d + '0');
			else
			{
				_putchar(d / 10 + '0');
				_putchar(d % 10 + '0');
			}

			if (y == t)
				_putchar('\n');
			y++;
		}
		y = 0;
		k++;
	}
}
