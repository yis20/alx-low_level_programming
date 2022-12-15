#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print numbers
 * Return: Always 0.
 */
void print_numbers(void)
{
int x;

x = 0;
while (x < 10)
{
	putchar (x + '0');
x++;
}

putchar ('\n');
}
