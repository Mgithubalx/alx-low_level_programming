#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * 
 * Desricption: function that returns the length of a string
 * Returns: returns length as an integer;
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
