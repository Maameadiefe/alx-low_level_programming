#include <stdio.h>
#include <stdlib.h>

/**
 * main - displays it's opcodes
 * @argc: input arguments
 * @argv: array input
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
	int bytes, x;
	char *car;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	car = (char *)main;
	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
		{
			printf("%02hhx\n", car[x]);
			break;
		}
		printf("%02hhx", car[x]);
	}
	return (0);
}
