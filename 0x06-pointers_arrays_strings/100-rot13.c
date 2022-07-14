#include "main.h"

/**
 * rot13 - a function that encodse a string using rot13
 * @s: the string to encode
 * Return: pointer to the encoded string
 */

char *rot13(char *s)
{

char *c;
char shift;

for (c = s; *c; ++c)
{
shift = 'A' + (*c & 32);
if (('a' <= *c && *c <= 'z') || ('A' <= *c && *c <= 'Z'))
*c = (*c - shift + 13) % 26 + shift;
}
return (s);
}