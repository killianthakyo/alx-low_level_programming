#include "main.h"
#include <stdio.h>
/**
 * _memcpy - Entry point to the function
 * @dest: Destination to hold assigned memory
 * @src: Memory to cpy
 * @n: bytes
 * Return: a pointer to the assigned memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
