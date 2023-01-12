#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory for an initialized buffer
  * @nmemb: number of memory bytes
  * @size: number of data type bits
  * Return: return pointer to initialized buffer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	p = malloc(nmemb * size);
	if (p == NULL)
	return (NULL);
	for (i = 0; i < nmemb * size; i++)
	((char *)p)[i] = 0;
	return (p);
}
