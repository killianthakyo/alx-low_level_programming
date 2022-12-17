#include "main.h"
#include <stdio.h>

/**
 * *_strcat - entry point for the program.
 * @dest: A pointer Parameter 1  passed from main
 * @src: A pointer PArameter 2 passed from main
 *
 * Return: dest as a pointer
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	int i = 0, n;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (n = 0; src[n] != '\0'; n++)
	{
		ptr[i] = src[n];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
