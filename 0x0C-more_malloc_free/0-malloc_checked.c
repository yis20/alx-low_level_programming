#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory using malloc.
  * @b: buffer size and no of bytes to be allocated.
  * Return: pointer to buffer which the allocated memory.
  */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
