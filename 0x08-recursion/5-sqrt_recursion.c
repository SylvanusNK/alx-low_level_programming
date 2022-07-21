#include "main.h"

int _sqrt(int, int);

/**
* _sqrt_recursion - a funtion that returns the natural square root of a number
* @n: given number
* Return: natural square root of n
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
* _sqrt - the recursive sqrt function
* @n: given number
* @i: the iterator
* Return: a number
*/
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
