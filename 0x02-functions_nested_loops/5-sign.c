#include "main.h"

/**
 * sign - print sign of a number
 * @n: numbers of sign to get printed
 * Return: 1 if number greater than zero
 * 0 is printed if n is zero
 * -1 is printed if n is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
