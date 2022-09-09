#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-entry point for the program.
 *
 * Description:  Print single numbers of base 10.
 * Return: 0.
 */
int main(void)
{
	int i;
	/* your code goes there */
	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
