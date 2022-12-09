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

	for (f = 49; f < 59; f++)
	{
		for (o = 49; o < 59; o++)
		{
			if (o > f)
			{
				for (r = 49; r < 59; r++)
				{
					if (r > o)
					{
					putchar(f);
					putchar(o);
					putchar(r);
					if (f == 56 && o == 57 && r == 58)
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
