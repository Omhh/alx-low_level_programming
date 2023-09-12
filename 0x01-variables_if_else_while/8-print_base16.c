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
	int n = 0;
	char b = 'a';

	while (n <= 9)
{
		putchar(n + '0');
		n++;
}
	while (b <= 'f')
{
		putchar(b);
		b++;
}
	putchar('\n');

	return (0);
}
