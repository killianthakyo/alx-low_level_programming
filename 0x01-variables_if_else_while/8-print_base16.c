#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-entry point for the program.
 *
 * Description:  Print allbase 16 in lowercase.
 * Return: 0.
 */
int main(void)
{
	int i;
	char l;
	/* your code goes there */
	for (i = 0; i <= 9; i++)
	{
		putchar (i + '0');
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
