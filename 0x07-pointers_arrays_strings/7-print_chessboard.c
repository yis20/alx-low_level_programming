#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - function which prints the chessboard.
 * @a: the board to print
 */

void print_chessboard(char (*a)[8])
{
	int y, g;

	y + g = 0;
	while (y < 8)
	{
		g = 0;
		while (g < 8)
		{
			_putchar(a[y][g]);
			g++;
		}

		 _putchar('\n');
		 y++;
	}
}
