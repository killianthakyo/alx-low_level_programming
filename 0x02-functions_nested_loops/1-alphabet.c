#include <stdlib.h>
#include "main.h"

/**
 * main - entry point for the program.
 *
 * Description:  Print _alphabets in lowercase.
 *
 * Return: No return value
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
