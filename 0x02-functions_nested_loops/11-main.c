#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print Natural Numbers to 98
 *@n: n is starting point
 */
void print_to_98(int n)
{
	printf("%d", n);
	for (int i = n + 1; i <= 98; i++)
	{
		printf(", %d", i);
	}
	printf("\n");
}
