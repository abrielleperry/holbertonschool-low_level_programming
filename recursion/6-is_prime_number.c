#include "main.h"
#include <stdio.h>
/**
 * find_prime - finds if number is prime
 * @n: number to check if prime
 * @i: number to check inside of n
 * Return: returns nothing
 */
int find_prime(int n, int i)
{
	if (i < 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (find_prime(n, i - 1));
}

/**
 * is_prime_number - decides prime or not
 * @n: number to check for prime
 * Return: returns 0 if not prime, returns 1 for prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, (n / 2)));
}
