#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers, starting with 1 and 2.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, y, j, k;

	y = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		k = y + j;
		y = j;
		j = k;
		printf("%lu", k);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
