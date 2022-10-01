#include "main.h"
#include <stdio.h>

/**
 * *_strncat - entry point for the program.
 * @dest: A pointer Parameter 1  passed from main
 * @src: A pointer PArameter 2 passed from main
 * @n: Number of bytes to allocate
 *
 * Return: dest as a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j >= n)
		{
			continue;
		}
		ptr[i] = src[j];
		i++;
	}
	if (j < n)
		ptr[i] = '\0';

	return (ptr);
}
