#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9 (except 2 and 4).
 *
 * Return: nothing on success.
 */
void print_most_numbers(void)
{
int yt;

for (yt = 48; yt < 58; yt++)
{
if (yt != 50 && yt != 52)
_putchar(yt);
}
_putchar('\n');
}
