#include "main.h"

/**
 * _isupper - entry point for the program.
 *
 * @c : character passed as c.
 *
 * Return: void
 */
int _isupper(int c)
{
	int ret;

	if (c >=65 && c <= 90)
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}
	return (ret);
}
