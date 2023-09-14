#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to ninety eight
 *
 * @n: checks for the input
 *
 *
 */

void print_to_98(int n)
{
	int a = n;

	if (n <= 98)
	{
		_putchar(a + '0');
		_putchar(',');
		_putchar(' ');
		a++;
	}
	else if (a >= 98)
	{
		_putchar(a + '0');
		_putchar(',');
		_putchar(' ');
		a--;
	}
	else
		_putchar('\n');
}
