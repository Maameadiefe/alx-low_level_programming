#include <stdio.h>
#include <stdlib.h>

/**
 * main - this will displays it's opcodes
 * @argc: arguments input
 * @argv: array of inputed arguments
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
	int bytes, a;
	char *s;

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
	s = (char *)main;
	for (a = 0; a < bytes; a++)
	{
		if (a == bytes - 1)
		{
			printf("%02hhx\n", s[a]);
			break;
		}
		printf("%02hhx", s[a]);
	}
	return (0);
}
