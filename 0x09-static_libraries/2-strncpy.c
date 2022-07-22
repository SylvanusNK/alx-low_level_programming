#include "main.h"
#include <string.h>

/**
* _strncpy - a funtion that copies two strings
* @dest: first parameter
* @src: second parameter
* @n: number of byte
* Return: a string
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
