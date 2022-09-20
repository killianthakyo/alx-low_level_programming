#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @dest: input 1.
 * @src: input 2.
 * Return: char variable
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0, i = 0;
	
	n = strlen(src);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
