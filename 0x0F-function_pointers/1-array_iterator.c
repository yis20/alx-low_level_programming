#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - execute function on an array
 * @array: array
 * @size: size of the array
 * @action: pointer to function that we need to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
