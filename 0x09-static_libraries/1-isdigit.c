#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if input is digit
 *
 * @c: checks the input
 *
 * Return: one if digit, zero otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

