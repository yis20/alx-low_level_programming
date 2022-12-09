#include <stdio.h>
/**
 * main - print possible combination all of two twodigit num
 *
 * Return: 0
 */

int main(void)
{
	int j;
	int k;

	for (j = 0; j < 100; j++)
	{
		for (k = 0; k < 100; k++)
		{
			if (k > j)
			{
				putchar(j / 10 + '0');
				putchar(j & 10 + '0');
				putchar(' ');
				putchar(k / 10 + '0');
				putchar(k % 10 + '0');

				if (j * 100 + k != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
