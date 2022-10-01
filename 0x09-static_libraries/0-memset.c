#include "main.h"
#include <stdio.h>
/**
 * _memset - Entry point to the function
 * @s: buffer the address of memory to assign
 * @b: constant byte
 * @n: the number of indexed to fill
 *
 * Return: , a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
