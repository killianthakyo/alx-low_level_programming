#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main-entry point for the program.
 *
 * Description:  Print _putchar with putchar.
 *
 * Return: 0.
 */
int main(void)
{
	char s[] = "_putchar";
	int i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(10);

	return (0);
}
