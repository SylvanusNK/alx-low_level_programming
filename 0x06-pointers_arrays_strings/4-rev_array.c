#include "main.h"

/**
* reverse_array - function that reverses an array of integers
* @a: array of intergers
* @n: size of array
* Return: Always 0 (success)
*/

void reverse_array(int *a, int n)
{
	int temp, i = 0;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
	for (i = 0; i < n; i++)
	{
		_putchar("%d", a[i]);
	}
}
