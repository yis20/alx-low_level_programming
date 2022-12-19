#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int x = 0;
	int y = 0;
	char *t = str;
	int k;

	while (*t != '\0')
	{
		t++;
		x++;
	}
	y = x - 1;
	for (k = 0 ; k <= y ; k++)
	{
		if (k % 2 == 0)
	{
		_putchar(str[k]);
	}
	}
	_putchar('\n');
}
