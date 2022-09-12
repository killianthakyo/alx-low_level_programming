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
	int i = 0, l = 0;
	/* your code goes there */
	for (i = 0; i <= 9; i++)
	{
		for (l = 0; l <= 9; l++)
		{
			if (i < l && i != l)
			{
				if (l > 1)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i + '0');
				putchar(l + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
