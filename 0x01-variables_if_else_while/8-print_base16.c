#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0
 */
int main(void)
{
	char x = 'a';
	int number;

	for (number = 0; number < 16; number++)
	{
		if (number < 10)
		{
			putchar(number + '0');
		} else
		{
			putchar(x);
			x++;
		}
	}
	putchar('\n');
	return (0);
}
