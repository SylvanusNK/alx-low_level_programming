#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array of integers
 * @a: first element of an array of integers
 * @n: the number of elements in an array
 * Return: void
 */
void print_array(int *a, int n)
{
if (a)
{
while (n > 0)
{
printf("%d", *a++);
if (--n)
printf(", ");
}
putchar('\n');
}
}
