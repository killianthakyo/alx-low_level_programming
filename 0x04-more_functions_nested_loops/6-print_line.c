#include "main.h"

/**
 * print_line - entry point for the program.
 *
 * @n: Iterator.
 *
 * Return: void
 */
void print_line(int n)
{
	int i;
	char c = '_';

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
