#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers from one to nine
 *
 * Return: always zero (success)
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
		_putcahr(n + '0');
	return (0);
}
