#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Entry point to the function
 * @s: string of characters
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
