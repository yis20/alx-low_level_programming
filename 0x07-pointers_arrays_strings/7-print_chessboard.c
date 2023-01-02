#include "main.h"
#include <unistd.h>
/**
 * print_chessboard - function which prints the chessboard.
 * @a: array of pointers.
 *
 * Retuurn: void.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		 _putchar('\n');
	}
}
/**
 * main - Entry point for the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	return (0);
}
