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

	while (n <= 9)
{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
		n++;
}
	putchar('\n');

	return (0);
}
