#include <stdio.h>
/**
 * main - this is a function to print the name of the program itself
 * @argv: is an array of strings ie holds the arguments passed to the program
 * @argc: is an integer that holds the no of arguments passed to the program,
 * including the name of the program itself.
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
