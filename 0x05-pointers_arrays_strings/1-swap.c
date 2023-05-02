#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @x: first integer to be swapped
 * @y: second integer to be swapped
 */

void swap_int(int *x, int *y)
{
	int m;

	m = *x;
	*x = *y;
	*y = m;
}
