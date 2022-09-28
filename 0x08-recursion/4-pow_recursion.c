#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - Entry point to the function
 * @x: int to get its power
 * @y: int to raise power
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
