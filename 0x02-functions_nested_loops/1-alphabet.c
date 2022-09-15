#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - entry point for the program.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
	return (0);
}
