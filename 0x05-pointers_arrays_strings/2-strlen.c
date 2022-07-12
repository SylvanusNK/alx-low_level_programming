#include "main.h"

/**
* _strlen - returns the length of a string character
* @s: string character to be determined
* Return: to return the length of the string
*/

int _strlen(char *s)
{
int len = 0;

if (s)
{
while (*(s + len));
++len;
}
return (len);
}
