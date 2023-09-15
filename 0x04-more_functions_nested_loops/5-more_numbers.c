#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *
 *
 */

void more_numbers(void)
{
	int line, n;

	for (line = 0; line <= 9; line++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}

