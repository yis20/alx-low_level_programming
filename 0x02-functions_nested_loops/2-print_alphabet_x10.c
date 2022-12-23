#include "main.h"

/**
 * main - alphabet.
 *
 *  print_alphabet_x10 - print ten times from a-z.
 *
 * Return: 0 success
 */
void print_alphabet_x10(void);

int i;
char x;
{
for (i = 0; i <= 9; i++)
{
for (x = 'a'; x <= 'z'; x++)
_putchar(x);
_putchar('\n');
}
}
