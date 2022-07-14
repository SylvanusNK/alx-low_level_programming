#include "main.h"
#include <string.h>

/**
* _strncat - function that cocatenates strings with n bytes
* @dest: first parameter
* @src: second parameter
* @n: byte size
* Return: dest string
*/

char *_strncat(char *dest, char *src, int n)
{
	char dest, src;
	int n;

	strncat(dest, src, n);
	return (dest);
}
