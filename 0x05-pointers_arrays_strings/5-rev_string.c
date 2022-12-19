#include "main.h"

/**
 * rev_string - function which  reverses a string.
 * @s: input string
 * Return: reversed string
 */

void rev_string(char *s)
{
	char ch = s[0];
	int y = 0;
	int x;

	while (s[y] != '\0')
	y++;
	for (x = 0; x < y; x++)
	{
		y--;
		ch = s[x];
		s[x] = s[y];
		s[y] = ch;
	}
}
