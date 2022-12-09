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

	for (f = 48; f < 58; f++)
	{
		for (o = 48; o < 58; o++)
		{
			if (o > f)
			{
				for (r = 48; r < 58; r++)
				{
					if (r > o)
					{
					putchar(f);
					putchar(o);
					putchar(r);
					if (f == 55 && o == 56 && r == 57)
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
