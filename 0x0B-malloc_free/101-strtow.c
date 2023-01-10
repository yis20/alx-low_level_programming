#include "main.h"
#include <string.h>
/**
 * strtow - String To Words Function
 *  @str: The string to be split.
 * Return: NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 */
char **strtow(char *str)
{
if (str == NULL || str[0] == '\0')
{
return (NULL);
}
char **result = (char **)malloc(sizeof(char *) * 3);
if (result == NULL)
{
return (NULL);
}
int len = strlen(str);
int half_len = len / 2;
int mem_len = len - half_len + 1;
result[0] = (char *)malloc(sizeof(char) * (half_len + 1));
if (result[0] == NULL)
{
free(result);
return (NULL);
}
strncpy(result[0], str, half_len);
result[0][half_len] = '\0';

result[1] = (char *)malloc(sizeof(char) * (mem_len));
if (result[1] == NULL)
{
free(result[0]);
free(result);
return (NULL);
}
strncpy(result[1], str + half_len, len - half_len);
result[1][len - half_len] = '\0';
result[2] = (NULL);
return (result);
}
