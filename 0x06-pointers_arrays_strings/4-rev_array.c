#include "main.h"

/**
* reverse_array - function that reverses an array of integers
* @a: array of intergers
* @n: size of array
* Return: Always 0 (success)
*/

void reverse_array(int *a, int n)
{
	for ( ; --n > 0; ++a, --n)
	{
		*a ^= a[n];
		a[n] ^= *a;
		*a ^= a[n];
	}
}
