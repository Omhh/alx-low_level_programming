#include <stdio.h>
#include "main.h"

/**
 * print_line - print straight line
 *
 * @n: checks for input
 *
 */

void print_line(int n)
{
	int c;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c = 1; c <= n; c++)
			_putchar('_');
		_putchar('\n');
	}
}
