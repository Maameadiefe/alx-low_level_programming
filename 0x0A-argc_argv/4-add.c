#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
*main - this will print the sum of two positive numbers.
*@argc: size of arguments.
*@argv: argument vector
*Return: 1 for when less of 2 arguments or nondigit numbers, 0 success
*/

int main(int argc, char **argv)
{
	int sum, x, w;

	sum = 0;
	for (x = 1; x < argc; x++)
	{
		for (w = 0; argv[x][w] != '\0'; w++)
			{
			if (!isdigit(argv[x][w]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
