#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-entry point for the program.
 *
 * Description:  Print a-z in lowercase and uppercase.
 *
 * Return: 0.
 */
int main(void)
{
	char l, u;
	/* your code goes there */
	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (u = 'A'; u <= 'Z'; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}
