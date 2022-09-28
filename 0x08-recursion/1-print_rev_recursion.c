#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Entry point to the function
 * @s: string of characters
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
