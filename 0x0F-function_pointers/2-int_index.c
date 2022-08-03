#include "function_pointers.h"

/**
  * int_index - function that serches for an integer
  * @array:array of integers
  * @size: size of array
  * @cmp: pointer to the funtion
  * Return: i or -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}

	return (-1);
}
