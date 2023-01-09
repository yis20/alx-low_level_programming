#include "main.h"

/**
 * str_concat - concatinating function 2 strings.
 * @s1: string pointer 1
 * @s2: string pointer 2
 * Return: string(1 + 2) or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int w = 0, x = 0, y = 0, z = 0;
	char *ss;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[w])
		w++;
	while (s2[x])
		x++;

	y = w + x;
	ss = (char *)malloc(y * sizeof(char) + 1);
	if (ss == NULL)
		return (NULL);
	x = 0;
	while (z < y)
	{
		if (z < w)
			ss[z] = s1[z];
		if (z >= w)
		{
			ss[z] = s2[x];
			x++;
		}
		z++;
	}
	ss[z] = '\0';
	return (ss);
}
