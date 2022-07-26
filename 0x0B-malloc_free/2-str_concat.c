#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings.
 * @s1: 1st string parameter
 * @s2: 2nd strung parameter
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, q, r;
	char *s;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; ++i)
			;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j]; ++j)
		{
			;
		}
	}
	q = i + j + 1;
	s = malloc(q * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (r = 0; r < i; ++r)
		s[r] = s1[r];
	for  (r = 0; r < j; ++r)
		s[r + i] = s2[r];
	s[i + j] = '\0';
	return (s);
}
