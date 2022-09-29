#include "main.h"



int confirm_is_prime(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: input integer
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	return (confirm_is_prime(n, 1));
}

/**
 * confirm_is_prime - confirms if a number is prime
 * @n: input integer
 * @i: iterator
 *
 * Return: 1 for prime or 0 for not prime
 */
int confirm_is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (confirm_is_prime(n, i + 1));
}
