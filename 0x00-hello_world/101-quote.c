#include <unistd.h>

/**
 * main - prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 *   followed by a new line, to the standard error.
 * Returns: Always 1 (Success)
 */
int main(void)
{
	write(2, ""and that piece of art is usefu" - Dora Korpar, 2015 - 10 - 19\n", 59);
	return (1);
}