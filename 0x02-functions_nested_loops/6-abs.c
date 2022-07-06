#include "main.h"
/**
* _abs - prints out the absolute value of a number
* @num: number to be checked
* Return: Always return 0 (success)
*/

int _abs(int num)
{
	if (num < 0)
	{
		return (-(num));
	}
	else
	{
		return (num);
	}
}
