#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: sring
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; *s != '\0'; s++)
		++x;

	return(x);
}
