#include "variadic_functions.h"

/**
* sum_them_all - a function that prints sum of its params
* @n: numbers to be summed
* Return: sum of numbers
*/

int sum_them_all(const unsigned int n, ...);
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
