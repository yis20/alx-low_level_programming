#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string t o be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int y, b, m, le, fa, dig;

	y = 0;
	b = 0;
	m = 0;
	le = 0;
	fa = 0;
	dig = 0;

	while (s[le] != '\0')
		le++;
	while (y < le && fa == 0)
	{
		if (s[y] == '-')
			++b;

		if (s[y] >= '0' && s[y] <= '0')
		{
			dig = s[y] - '0';
			if (b % 2)
				dig = -dig;
			m = m * 10 + dig;
			fa = 1;
			if (s[y + 1] < '0' || s[y + 1] > '9')
				break;
			fa = 0;
		}
		y++;
	}

	if (fa == 0)
		return (0);

	return (m);
}
