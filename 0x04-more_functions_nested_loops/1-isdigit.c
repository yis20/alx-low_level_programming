#include "main.h"
/**
 * _isdigit - a function that checks for a digit (zero through nine)
 * @c: tested character
 * Return: returns 1 if (given) is a digit, returns 0 otherwise
 */

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
