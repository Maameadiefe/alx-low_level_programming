#include <stdio.h>
#include <stdlib.h>
/**
*main - this  prints all arguments received
*@argc: arguments size.
*@argv: argument vector
*Return: Always 0
*/

int main(int argc, char **argv)
{
	int number = 0;

	while (number < argc)
	{
		printf("%s\n", *(argv + number));
		number++;
		(*argv)++;
	}
	return (0);
}
