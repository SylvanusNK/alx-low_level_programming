#include "function_variadic.h"
#include <stdarg.h>
/**
* sum_them_all - a function that prints sum of its params
* @n: numbers to be summed
* Return: sum of numbers
*
*/

int sum_them_all(const unsigned int n, ...);
{
	unsigned int i;
	int sum;
	va_list ap;

	va_start(ap, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap)
	return (sum);
}
