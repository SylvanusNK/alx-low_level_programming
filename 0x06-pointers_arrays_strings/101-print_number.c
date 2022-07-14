#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: the integer to be printed
 * Return: void
*/
void print_number(int n)
{
if (n > -1)
{
if (n > 9)
print_number(n / 10);
_putchar('0' + n % 10);
}
else
{
_putchar('-');
if (n < -9)
print_number(n / -10);
_putchar('0' - n % 10);
}
}
