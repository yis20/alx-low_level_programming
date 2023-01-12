#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory space and returns a pointer to that direction
 * @nmemb: Number of elements to store
 * @size: Data type of the elements
 * Return: Pointer to the allocated memory space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb ; i++)
		p[i] = 0;
	return (p);
}
