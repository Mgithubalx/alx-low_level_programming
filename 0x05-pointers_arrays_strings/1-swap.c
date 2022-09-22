#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: the first entry
 * @b: the second entry
 *
 * Return: nothing returns
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
