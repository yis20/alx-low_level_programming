#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of
 * 3 or 5 below 1024.
 * Return: Nothing.
 */

int main(void)
{
	int i, yres;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			yres += i;
	printf("%d\n", yres);
	return (0);
}
