#include "main.h"
/**
 * _strcmp - copie the string
 * @s1: param1
 * @s2: param2
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, b = 0;

	while (s1[i] != '\0' && b == 0)
	{
		b = s1[i] - s2[i];
		i++;
	}

	return(b);
}
