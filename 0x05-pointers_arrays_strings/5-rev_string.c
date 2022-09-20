#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - prints a string in reverse order
 * @s: String to reverse
 * Return: Nothing
 */

void rev_string(char *s)
{
        int len = strlen(s);

        while (len--)
                putchar(*(s + len));
        putchar(10);
}
