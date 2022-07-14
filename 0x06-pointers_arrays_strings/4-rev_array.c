#include "main.h"

/**
* reverse_array - function that reverses an array of integers
* @a: array of intergers
* @n: size of array
* Return: Always 0 (success)
*/

void reverse_array(int *a, int n)
{
	int *ptr, i, new, x;

	ptr = a;
	for (i = 0; i < n; i++)
		ptr++;
	for (x = 0; x < n / 2; x++)
	{
		new = a[x];
		a[x] = *ptr;
		*ptr = new;
		ptr--;
	}
}
