#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @a: input 1.
 * @n: input 2.
 * Return: half of input
 */
void print_array(int *a, int n)
{
	int i = 0;
	while (i < n)
	{
		printf("%d", *(a+i));
		if (i <= n - 2)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
