#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Entry point to the function
 * @s: string of characters
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
