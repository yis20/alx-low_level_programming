#include "main.h"
/**
 * _strspn - search a string for a set of bytes
 * @s: source string
 * @accept: searching string
 * Return: new string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, t = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				t++;
			}

			j++;
		}

		i++;
	}

	return (t);
}
