#include "main.h"

/**
* string_toupper - funtions that changes letter to upper case
* @a: stirng parameter
* Return: string
*/
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x[i] - 32;
		i++;
	}
	return (a);
}

