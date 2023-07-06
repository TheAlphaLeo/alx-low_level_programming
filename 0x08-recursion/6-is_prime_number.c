#include "main.h"

int actual_prime(int t, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @t: number to evaluate
 *
 * Return: 1 if t is a prime number, 0 if not
 */
int is_prime_number(int t)
{
	if (t <= 1)
		return (0);
	return (actual_prime(t, t - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @t: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int t, int i)
{
	if (i == 1)
		return (1);
	if (t % i == 0 && i > 0)
		return (0);
	return (actual_prime(t, i - 1));
}
