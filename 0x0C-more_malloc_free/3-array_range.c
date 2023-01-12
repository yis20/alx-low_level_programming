#include <stdlib.h>
#include <stdio.h>
/**
 * _abs - get absolute value
 * @n: number to calculate
 * Return: absolute value of the number
 *
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
/**
  * array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: pointer to array of integers
  */
int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);
	int range = max - min + 1;
	int *array = (int *) malloc(range * sizeof(int));

	if (array == NULL)

		return (NULL);
	for (int i = 0; i < range; i++, min++)
		array[i] = min;
		return (array);
}
