#include "main.h"

/**
 * _strdup - is a function that is used to duplicate a string.
 * @str: a string pointer to being duplicated.
 * Return: NULL  if str = NULL or pointer duplicated on success
 */
char *_strdup(char *str)
{
	char *b;
	int a = 1, x = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[a])
		a++;
	b = (char *)malloc(a * sizeof(char) + 1);
	if (b == NULL)
	{
		return (NULL);
	}
	while (x < a)
	{
		b[x] = str[x];
		x++;
	}
	b[x] = '\0';
	return (b);
}
