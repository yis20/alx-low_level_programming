#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first source string.
 * @s2: The second string to truncate two strings up to n bytes..
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: If the function fails - NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int s1count = 0, s2count = 0, i;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (s1count = 0; s1[s1count]; s1count++)
	;
	for (s2count = 0; s2[s2count]; s2count++)
	;

	if (s2count > n)
	s2count = n;
	else
	n = s2count;
	c = malloc((s1count + s2count + 1) * sizeof(char));
	if (c == NULL)
	return (NULL);
	for (i = 0; i < (s1count + s2count); i++)
	i < s1count ? (c[i] = s1[i]) : (c[i] = s2[i - s1count]);
	c[s1count + s2count] = '\0';
	return (c);
}
