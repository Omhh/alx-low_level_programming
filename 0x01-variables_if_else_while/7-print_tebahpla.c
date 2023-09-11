#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphapet in lowercase
 *
 * Return: Always zero (success)
 */

int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);
}
