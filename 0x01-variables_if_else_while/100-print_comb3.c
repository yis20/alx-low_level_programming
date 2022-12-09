#include <stdio.h>

/**
 * main -  prints all possible differ combinations of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int tenses;
	int oneses;

	for (tenses = 0; tenes <= 9; tenses++)
	{
		for (oneses = tenses + 1; ones <= 9; oneses++)
		{
			putchar(tenses + '0');
			putchar(oneses + '0');
			if (tens < 88)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
