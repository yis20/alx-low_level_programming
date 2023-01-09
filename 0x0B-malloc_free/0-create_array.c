#include "main.h"
/**
 * create_array - creats an array
 * @size: size of an array
 * @c: character to initialize an array with
 * Return: NULL if it fials or a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *b;

	if (size == 0)
	{
		return (NULL);
	}
	b = (char *)malloc(size * sizeof(char));
	if (b == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		b[i] = c;
	}

	return (b);

}
