#include "main.h"

/**
 * jack_bauer - printeveryminuteofthedayof jack bauer,\starting 00:00 to 23:59
 *
 * Return: nothing on success
 */
void jack_bauer(void)
{
	int x = 0, y = 23, x2 = 0, y2 = 59;

	while (x <= y)
	{
		while (x2 <= y2)
		{
			_putchar(x < 9 ? 0 + '0' : x / 10 + '0');
			_putchar(x < 9 ? x + '0' : x % 10 + '0');
			_putchar(':');
			_putchar(x2 < 9 ? 0 + '0' : x2 / 10 + '0');
			_putchar(x2 < 9 ? x2 + '0' : x2 % 10 + '0');
			_putchar('\n');

			x2++;
		}
		x2 = 0;
		x++;
	}
}
