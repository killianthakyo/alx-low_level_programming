#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - entry point for the program.
 *
 * @c : character passed as c.
 *
 * Return: void
 */
int _isalpha(int c)
{
	int ret;

	if (isalpha(c))
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return (ret);
}
