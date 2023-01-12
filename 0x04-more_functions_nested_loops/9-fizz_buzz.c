#include "main.h"
#include <stdio.h>
/**
 * main - Prints the numbers 1 - 100,
 *  instead of multiples of 3, print Fizz
 *  instead of multiples of 5, print Buzz
 *  for multiples of 3 and 5, print FizzBuzz.
 * Return: 0 on success.
 */
int main(void)
{
	int iy;

	for (iy = 1; iy <= 100; iy++)
	{
		if (iy % 3 == 0 && iy % 5 == 0)
			printf("FizzBuzz");
		else if (iy % 3 == 0)
			printf("Fizz");
		else if (iy % 5 == 0)
			printf("Buzz");
		else
			printf("%d", iy);
		if (iy != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
