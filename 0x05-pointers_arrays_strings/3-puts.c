#include "main.h"

/**
* _puts - to print strings on the stdout
* @str: string to be printed out
* Return: Always 0
*/

void _puts(char *str)
{
if (str)
{
while (*str)
{
_putchar(*str++);
_putchar('\n');
}
}
