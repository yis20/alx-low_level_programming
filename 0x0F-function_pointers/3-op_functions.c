#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - add
 * @a: integer
 * @b: integer
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that subtracts two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result of the subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: multp 1
 * @b: multp 2
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: ...
 * @b: ...
 *
 * Return: quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulus for remainder
 * @a: integer
 * @b: integer
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
