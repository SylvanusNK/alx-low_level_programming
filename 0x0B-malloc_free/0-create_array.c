#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* create_array - funtion that creates an array of char
* @size: size of allocated memory
* @c: character parameter
* Return: pointer if succrssful else 0
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
