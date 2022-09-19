#include "main.h"

/**
 * swap_int - entry point for the program.
 * @a: A pointer Parameter 1  passed from main
 * @b: A pointer Parameter 2 passed from main
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aa = *a;
	int bb = *b;

	*a = bb;
	*b = aa;
}
