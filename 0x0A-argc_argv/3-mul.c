#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: Argument count.
 * @argv: Parameters.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{

	int num1;
	int num2;
	
	if (argc != 3)
	{
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
