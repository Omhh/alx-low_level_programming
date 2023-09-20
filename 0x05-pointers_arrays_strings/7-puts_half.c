#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 *
 * @str: input
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;

	i++;
	for (i /= 2; str[i] != '\n'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
