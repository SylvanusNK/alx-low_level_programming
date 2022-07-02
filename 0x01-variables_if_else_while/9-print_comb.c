#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
*/

int main(void)
{
	int num = '0';
	int comma = ',';

	while (num <= '9')
	{
		putchar(num);
		if (num < '9')
		{
			putchar(comma);
		}
		putchar(' ');
		num++;
	}
	return (0);
}
