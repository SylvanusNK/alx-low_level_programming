#include "main.h"

/**
* _puts -> this is a function that prints a string on the stdout
* @str: string to be printed
*/
void _puts(char *str)
{

	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
