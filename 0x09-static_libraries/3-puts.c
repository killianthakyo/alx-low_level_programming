#include "main.h"

/**
 * _puts - entry point for the program.
 * @str: A pointer Parameter 1  passed from main
 *
 * Return: void
 */
void _puts(char *str)
{
	int counter = 0;

	while (*str != '\0')
	{
		_putchar(str[counter]);
		str++;
	}

	_putchar('\n');
}
