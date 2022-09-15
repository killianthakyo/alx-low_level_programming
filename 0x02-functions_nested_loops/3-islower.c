#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - entry point for the program.
 *
 * Return: void
 */
int _islower(int c)
{
	int ret; 
	if (islower(c))
	{
		ret = 1;
	} else 
	{
		ret =0;
	}
	return (ret);
}
