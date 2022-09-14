#include <stdlib.h>
#include "main.h"

/**
 * main - entry point for the program.
 *
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
}
