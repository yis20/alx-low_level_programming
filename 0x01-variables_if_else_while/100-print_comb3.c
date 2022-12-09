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

	for (tenses = 0; tenses <= 9; tenses++)
	{
		for (oneses = tenses + 1; oneses <= 9; oneses++)
		{
			putchar(tenses + '0');
			putchar(oneses + '0');
			if (tenses < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
