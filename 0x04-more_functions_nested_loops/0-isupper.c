#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 *
 * @c: checks the input
 *
 * Return: one if uppercase, zero otherwise
*/

int _isupper(int c)
{
	if (c >= 95 && c <= 97)
		_putchar(1);
	else
		_putchar(0);
}
