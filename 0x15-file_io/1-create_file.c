#include "main.h"
/**
 * _strlen - check the code for Holberton School students.
 * @s: integer1
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count))
		count++;
	return (count);
}
/**
 * create_file - creates a file usong creat()
 * @filename: pointer to string
 * @text_content: is a NULL terminated string to write to the file
 * Return: the converted number
 */
int create_file(const char *filename, char *text_content)
{
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (text_content == NULL)
		return (1);
	if (file == -1)
		return (-1);
	write(file, text_content, _strlen(text_content));
	close(file);
	return (1);
}
