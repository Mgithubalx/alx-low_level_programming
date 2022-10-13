#include "main.h"

int act_sqrt_recursion(int n, int x);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number with square root to be calculated
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (act_sqrt_recursion(n, 0));
}

/**
 * act_sqrt_recursion - recurses to find the natural sqaure root of a number
 * @n: number with square root to be calculated
 * @x: squared number
 *
 * Return: square root of n
 */
int act_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (act_sqrt_recursion(n, x + 1));
}
