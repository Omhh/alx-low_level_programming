#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: checks for the input
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int n, m;
	char temp;

	for (n = 0; s[n] != '\0'; ++n)
		;

	for (m = 0; m < 1 / 2; m++)
	{
		temp = s[m];
		s[m] = s[n - 1 - m];
		s[n - 1 - m] = temp;
	}
}
