#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
int y, j
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (y = 0; n[y] != '\0'; y++)
{
for (j = 0; j < 10; j++)
{
if (n[y] == s1[j])
{
n[y] = s2[j];
}
}
}
return (n);
}
