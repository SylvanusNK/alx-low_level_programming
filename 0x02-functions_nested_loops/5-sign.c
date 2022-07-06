#include "main.h"
/**
* print_sign - checks for the sign and prints
* @value: the sign to be checked
*Return: return 1 or 0 or -1
*/

int print_sign(int value)
{
	if (value > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (value == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
