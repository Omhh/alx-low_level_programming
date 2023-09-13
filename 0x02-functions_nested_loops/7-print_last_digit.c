#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of a number
 *
 * @c: input
 *
 * Return: last digit
 */

int print_last_digit(int c)
{
	int n;

	if (c < 0)
		n = (c % 10) * (-1);
	else
		n = (c % 10);

	_putchar(n + '0');
	return (n);
}

