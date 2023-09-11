#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet in lowercase and UPPERCASE
 *
 * Return: Always zero (success)
 */

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
	putchar(n);
	n++;
	}
	char N = 'A';

	while (N <= 'Z')
	{
	putchar(N);
	N++;
	}
	putchar('\n');
	return (0);
}
