#include "main.h"

/**
* reverse_array - function that reverses an array of integers
* @a: array of intergers
* @n: size of array
* Return: Always 0 (success)
*/

void reverse_array(int *a, int n)
{
	int tmp;

	for (int 1 = 0; i < n / 2; i++)
	{
		tmp = *a;
		*a = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
	for (int i = 0; i < n; i++)
	{
		_putchar("%d", *a);
	}
}
