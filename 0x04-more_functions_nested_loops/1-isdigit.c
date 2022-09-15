#include "main.h"

/**
 * _isdigit - entry point for the program.
 *
 * @c : character passed as c.
 *
 * Return: void
 */
int _isdigit(int c)
{
	int ret;

	if (c >= 48 && c <= 57)
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return (ret);
}
