#include <stdio.h>

/**
 * main - Entrry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar(number + '0');
	putchar('\n');
	return (0);
}
