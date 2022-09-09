#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-entry point for the program.
 *
 * Description:  Print z-a in lowercase.
 *
 * Return: 0.
 */
int main(void)
{
	char l;
	/* your code goes there */
	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
