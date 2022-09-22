#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @scr: string to add
 *
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *scr)
{
	int d, s;

	d = 0;
	s = 0;

	while (dest[d] != '\0')
		d++;

	while (src[s] != '\0')
	{
		dest[d] = scr[s];
		s++;
		d++;
	}

	dest[d] = '\0';

	return (dest);
}
