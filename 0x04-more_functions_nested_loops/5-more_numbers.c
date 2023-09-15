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
	int line, n, m;

	for (line = 0; line <= 9; line++)
	{
		for (n = 0; n <= 14; n++)
		{
			m = n;
			if (m > 9)
			{
				_putchar(1 + '0');
				m = n % 10;
			}
			_putchar(m + '0');
		}
		_putchar('\n');
	}
}

