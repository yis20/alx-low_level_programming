#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Entry point
 * @d: passing structure at the function
 * @name: store a strig for main
 * @age: store a number for main
 * @owner: store a strig for main
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* passed to structure from main */
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
