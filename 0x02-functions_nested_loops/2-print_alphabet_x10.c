#include "main.h"

/**
 * print_alphabet_x10 - print ten times from a-z.
 */
void print_alphabet_x10(void)
{
	int y;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
