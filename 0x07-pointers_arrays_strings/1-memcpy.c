#include "main.h"
/**
 * _memcpy - function fills memory with another buffer.
 * @dest: source string
 * @src: string for filling
 * @n: length of string
 * Return: new string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
