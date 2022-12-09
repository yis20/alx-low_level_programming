#include <stdio.h>
/**
 * main - program which print combinations of three digits
 *
 *
 * Return: 0
 */
int main(void)
{
	int f;
	int o;
	int r;

	for (f = 36; f < 46; f++)
	{
		for (o = 36; o < 46; o++)
		{
			if (o > f)
			{
				for (r = 36; r < 46; r++)
				{
					if (r > o)
					{
					putchar(f);
					putchar(o);
					putchar(r);
					if (f == 43 && o == 44 && r == 45)
					{
						break;
					}

					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
