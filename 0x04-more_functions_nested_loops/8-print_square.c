#include "main.h"

/**
 * print_square - entry point for the program.
 *
 * @n: Iterator.
 *
 * Return: void
 */
void print_square(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
