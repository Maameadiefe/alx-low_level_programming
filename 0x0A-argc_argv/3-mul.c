#include <stdio.h>
#include <stdlib.h>

/**
*main - this will print the product of two arguments.
*@argc: arguments size.
*@argv: argument vector
*Return: 1 if they are less of 2 arguments otherwise 0.
*/

int main(int argc, char **argv)
{
	int multiplication;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multiplication = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%i\n", multiplication);
	}
	return (0);
}
