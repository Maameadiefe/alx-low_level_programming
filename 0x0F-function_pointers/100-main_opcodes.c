#include <stdio.h>
#include <stdlib.h>

/**
 * main - displays it's opcodes
 * @argc: input arguments
 * @argv: array of input arguments
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
	int size, x;
	char *car;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	car = (char *)main;
	for (x = 0; x < size; x++)
	{
		if (x == size - 1)
		{
			printf("%02hhx\n", car[x]);
			break;
		}
		printf("%02hhx", car[x]);
	}
	return (0);
}
