#include "main.h"
/**
 * get_endianness - get the endiannes of the arch
 * Description: get the endiannes of the arch
 * section header: the header of this function is holberton.h
 * Return: 1 in little indian - 0 in big indian.
 */

int get_endianness(void)
{
	int bit = 0x01;

	if (((bit << 4) & 0x1) == 0x1)
		return (0);
	else
		return (1);
}
