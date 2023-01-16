#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - entry point _frees a dog structure
 * @d: pointer to struct to entry
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
