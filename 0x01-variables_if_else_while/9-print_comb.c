#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; number <= 9; num++)
	{
	putchar(num + '0');
	if (num < 9)
	{
	putchar(',');
	puutchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
