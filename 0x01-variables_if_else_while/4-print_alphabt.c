#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all the letters except q and e
 *
 * Return: Always zero (success)
 */

int main(void)
{
	char n = 'a';

	while (n <= 'z')
{
	if (n == 'e' || n == 'q')
{
	n++;
}
	else
{
	putchar(n);
	n++;
}
}
	putchar('\n');

	return (0);
}
