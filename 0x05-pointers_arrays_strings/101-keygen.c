#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid password for the program.
 * 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int pas[100];
	int y, t, k;

	t = 0;

	srand(time(NULL));

	for (y = 0; y < 100; y++)
	{
		pas[y] = rand() % 78;
		t += (pas[y] + '0');
		putchar(pas[y] + '0');
		if ((2772 - y) - '0' < 78)
		{
			n = 2772 - t - '0';
			sum += k;
			putchar(k + '0');
			break;
		}
	}
	return (0);
}
