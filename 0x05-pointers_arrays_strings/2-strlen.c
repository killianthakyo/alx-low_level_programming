#include "main.h"

/**
 * _strlen - entry point for the program.
 * @s: A pointer Parameter 1  passed from main
 *
 * Return: int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
