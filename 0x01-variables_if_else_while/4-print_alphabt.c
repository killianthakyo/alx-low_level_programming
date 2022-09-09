#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-entry point for the program.
 *
 * Description:  Print a-z in lowercase except q & e.
 * Return: 0.
 */
int main(void)
{
	char l;
	/* your code goes there */
	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && l != 'e')
		{
			putchar(l);
		}
	}
	putchar('\n');
	return (0);
}
