#include "main.h"

/**
* reset_to_98 - resets the value of the variable n to 98
* @n: value to reset
* Return: Always 0
*/

void reset_to_98(int n)
{
	int n;
	int *p;

	n = 402;
	p = &n;

	_putchar("The vaule of 'n': %d\n", n);
	*p = 98;
	_putchar("The valuen of 'n': %d\n", n);

	return (0);
}
