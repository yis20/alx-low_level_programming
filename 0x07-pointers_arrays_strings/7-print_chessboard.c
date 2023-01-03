#include "main.h"

/**
 * print_chessboard - function which prints the chessboard.
 * @a: array of pointers.
 *
 * Retuurn: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int y, g;

	for (y = 0; y < 8; y++)
	{
		for (g = 0; g < 8; g++)
		{
			_putchar(a[y][g]);
		}

		 _putchar('\n');
	}
}
