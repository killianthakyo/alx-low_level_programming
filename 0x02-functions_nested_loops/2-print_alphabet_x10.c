#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - entry point for the program.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar(10);
		j++;
	}
}
