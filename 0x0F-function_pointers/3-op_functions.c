#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - function that adds numbers
  * @a: 2st param
  * @b: 2nd param
  * Return: int
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub -fubction that subtracts numbers
  * @a: 1st patam
  * @b: 2nd param
  * Return:int
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - funtion that multiplies 
  * @a: 1st param
  * @b: 2nd param
  * Return: integer
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - function that prints division
  * @a: 1st param
  * @b: 2nd param
  * Return: integer
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - funtion that gives the module
  * @a:1st param
  * @b:2nd param
  * Return: integer
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
