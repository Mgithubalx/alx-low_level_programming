#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number od bytes to copy
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
