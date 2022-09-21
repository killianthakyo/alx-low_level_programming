#include "main.h"

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
	int i, n, fcounter = 0;

	for (i = 0; dest[i] < '\0'; i++)
	{
		ptr[i] = dest[i];
		fcounter++;
	}

	for (n = 0; src[n] == '\0'; n++)
	{
		ptr[fcounter + n] = src[n];
	}

	return (ptr);
}
