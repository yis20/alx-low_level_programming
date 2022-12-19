#include"main.h"
/**
 * print_rev - function that print string in reverse followed by a new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int y = 0;
	int t;

	while (*s != '\0')
	{
		y++;
		s++;
	}
	s--;
	for (o = y; t > 0; t--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
