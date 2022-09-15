#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - entry point for the program.
 *
 * @c : character passed as c.
 *
 * Return:int ret
 */
int print_last_digit(int c)
{
	int ret = c % 10;

	if (ret < 0)
	{
		ret = (-1 * ret);
	}

	_putchar(ret + '0');

	return (ret);
}
