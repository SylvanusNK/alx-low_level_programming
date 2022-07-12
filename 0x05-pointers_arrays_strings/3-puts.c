#include "main.h"

/**
* _puts - to print strings on the stdout
* @str: string to be printed out
* Return: void
*/

void _puts(char *str)
{
if (str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
}
