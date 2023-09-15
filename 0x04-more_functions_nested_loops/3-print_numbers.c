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

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
