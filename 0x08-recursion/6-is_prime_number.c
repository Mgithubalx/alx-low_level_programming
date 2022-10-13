#include "main.h"

int prime_num(int n, int a);

/**
 * is_prime_number - returns 1 if input integer is a prime number
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_num(n, n - 1));
}

/**
 * prime_num - calculate if number is prime
 * @n: number to evaluate
 * @a: beginning of check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int prime_num(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (prime_num(n, a - 1));
}
