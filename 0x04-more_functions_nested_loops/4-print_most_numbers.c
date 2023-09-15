#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers from 1 to 9 except 2 and 4
 *
 * 
 *
 */

void print_most_numbers(void)
{
	int n = 0;
	
	for (; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n + '0');
	}
	_putchar('\n');
}
