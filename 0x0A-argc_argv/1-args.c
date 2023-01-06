#include <stdio.h>
/*
 * main - the name of the program itself
 * @argv - is an array of strings that holds the arguments passed to the program
 * @argc - is an integer that holds the number of arguments passed to the program, including the name of the program itself.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	 return 0;
}
