#include "main.h"

/**
* swap_int - to swapt the values of two variables
* @a: interger value of pointer a
* @b: integer value of pointer b
* Return: Always 0
*/

void swap_int(int *a, int *b)
{
if (a && b)
{
*a ^= *b;
*b ^= *a;
*a ^= *b;
}
}
