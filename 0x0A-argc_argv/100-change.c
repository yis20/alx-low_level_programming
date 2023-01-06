#include <stdio.h>
#include <stdlib.h>

/**
 * main - C program for adding numbers
 * @argc: argc parameter
* @argv: an array of a command listed
* Return: 0
*/
int main(int argc, char *argv[])
{
	int no, y, outcome = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	no = atoi(argv[1]);
	if (no < 0)
	{
		printf("0\n");
		return (0);
	}
	for (y = 0; y < 5 && no >= 0; y++)
	{
		while (no >= cents[y])
		{
			no -= cents[y];
			outcome++;
		}
	}
	printf("%d\n", outcome);
	return (0);
}
