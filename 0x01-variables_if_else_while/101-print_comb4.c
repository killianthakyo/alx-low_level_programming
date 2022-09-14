#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-entry point for the program.
 *
 * Description:  Print 3 digit combinations.
 * Return: 0.
 */
int main(void)
{
	int i = 0, l = 0, z = 0;
	/* your code goes there */
	for (i = 0; i <= 9; i++)
	{
		for (l = 0; l <= 9; l++)
		{
			for (z = 0; z <= 9; z++)
			{
				if (ilz < lzi && ilz < liz && ilz < izl && ilz < zil && ilz < zli)
				{
					if (i != l && i != z && l != z)
					{
						if (z > 2)
						{
							putchar(',');
							putchar(' ');
						}
						putchar(i + '0');
						putchar(l + '0');
						putchar(z + '0');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
