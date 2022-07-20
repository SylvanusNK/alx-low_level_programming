#include "main.h"

/**
* _sqrt_recursion - a funtion that returns the natural square root of a number
* @n: given number
* Return: natural square root of n
*/

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion(n, 1));
}
