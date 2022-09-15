#include "main.h"

/**
 * print_diagonal - entry point for the program.
 *
 * @n: Iterator.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	char c = 92;

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		_putchar(c);
	}
	_putchar('\n');
}
