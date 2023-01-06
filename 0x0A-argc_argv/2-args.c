#include <stdio.h>

/**
* main - this is a function to print its name
* @argc: an integer that holds the number of arguments passed to the program
* @argv: array of strings that holds the arguments passed to the program
* Return: 0 success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
