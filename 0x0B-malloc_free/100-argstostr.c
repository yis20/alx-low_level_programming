#include "main.h"

/**
 * argstostr - concatenates all the arguments of given program.
 * @ac: count the number of arguments
 * @av: An array pointer to the arguments
 * Return: NULL if ac == 0 or av == NULL or a pointer to a new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
int arg = 0, byte = 0, index = 0, size = ac;

if (ac == 0 || av == NULL)
return (NULL);

while (arg < ac)
{
byte = 0;
while (av[arg][byte])
{
size++;
byte++;
}
arg++;
}

str = malloc(sizeof(char) * size + 1);

if (str == NULL)
return (NULL);

arg = 0;
index = 0;
while (arg < ac)
{
byte = 0;
while (av[arg][byte])
{
str[index++] = av[arg][byte];
byte++;
}
	str[index++] = ('\n');
arg++;
}

str[size] = ('\0');

return (str);
}

