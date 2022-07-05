#include "main.h"
/**
* print_alphabet_x10 - prints the alphabets in lower case x10
* Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{
	char alphabet;
	int digit = 1;

	while (digit <= 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		digit++;
	}
}
