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
 * append_text_to_file - append a file usong creat()
 * @filename: pointer to string
 * @text_content: is a NULL terminated string to write to the file
 * Return: the converted number
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);
	if (!text_content)
		return (1);
	write(file, text_content, _strlen(text_content));
	close(file);
	return (1);
}
