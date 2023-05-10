#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - retains a prime number
 * @n: number to check if it is prime or not
 * Return: value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks if number is a prime number
 * @n: number to be checked
 * @i: iteration
 * Return: 1 if the number is prime, otherwise, 0
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
