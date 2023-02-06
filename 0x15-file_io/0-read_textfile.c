#include "main.h"
/**
 * read_textfile -  a function that reads a text file
 * and prints it to the POSIX standard output.
 *
 * @filename: String of char
 * @letters: size to print
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, count = 0;
	char *buf = malloc(sizeof(char) * letters);

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	count = read(file, buf, letters);
	buf[letters] = '\0';
	count = write(STDOUT_FILENO, buf, count);
	close(file);
	free(buf);
	return (count);
}
