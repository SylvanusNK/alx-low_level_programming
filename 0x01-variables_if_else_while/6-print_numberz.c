#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns number of digit from 0-9
 * Return: Always 0 (success)
*/

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
