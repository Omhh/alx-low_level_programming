#include "main.h"

/**
 * print-alphabet - print alphabet from a to z using _putchar
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
