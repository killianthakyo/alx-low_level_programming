#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - Entry point to the function
 * @n: int to to find its square root
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int i = n / 2;

	return (_find_sqrt(i, n));
}
/**
 * _find_sqrt - returns square root of a number
 * @i: value checking
 * @n: value to find sq root
 * Return: result
 */
int _find_sqrt(int i, int n)
{
	if (n == 1)
		return (1);
	if (i * i == n)
		return (i);
	if (i * i < n)
		return (-1);
	return (_find_sqrt(i - 1, n));
}
