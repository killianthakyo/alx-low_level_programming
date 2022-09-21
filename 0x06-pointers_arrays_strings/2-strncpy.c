#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - entry point for the program.
 * @dest: A pointer Parameter 1  passed from main
 * @src: A pointer PArameter 2 passed from main
 * @n: Number of bytes to allocate
 *
 * Return: dest as a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0, j;

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		{
			ptr[j] = src[j];
		}
		i++;
	}
	if (i < n)
		ptr[j] = '\0';


	return (ptr);
}
