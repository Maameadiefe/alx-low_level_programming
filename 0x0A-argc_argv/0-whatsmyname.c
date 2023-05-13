#include <stdio.h>
#include <stdlib.h>
/**
*main - this funtion prints its name and followed by a line.
*@argc: arguments size.
*@argv: argument vector
*Return: Always 0.
*/

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
