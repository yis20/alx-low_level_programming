#include "main.h"
/**
 * print_most_numbers - print numbers except two and four
 *
 * Return: returns nothing
 */
void print_most_numbers(void)
{
int x;
for (x = 48; x < 58; x++)
{
if ((x == 50) || (x == 52))
{
continue;
}
_putchar(x);
}
_putchar(10);
}
