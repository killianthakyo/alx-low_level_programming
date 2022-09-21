#include "main.h"
#include <stdio.h>
/**
 * string_toupper - reverse array
 * @str: param1
 *
 * Return:str.
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
