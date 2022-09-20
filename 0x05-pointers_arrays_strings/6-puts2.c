#include "main.h"

/**
 * puts2 - entry point for the program.
 * @str: A pointer Parameter 1  passed from main
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
