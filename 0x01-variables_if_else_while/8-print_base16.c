#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns numbers to base 16
 * Return: Always 0 (success)
*/

int main(void)
{
	int ch = '0';
	int chi = 'a';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	while (chi <= 'f')
	{
		putchar(chi);
		chi++;
	}
	putchar('\n');
	return (0);
}
