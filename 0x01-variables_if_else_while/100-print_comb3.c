#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
*/

int main(void)
{
	int b, c;

	b = 38;
	c = 38;

	while (c < 48)
	{
		b = 38;
		while (b < 48)
		{
			if (c != b && c < b)
			{
				putchar(c);
				putchar(b);
				if (b == 47 && c == 46)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		c++
	}
	putchar('\n');
	return (0);
}
