#include "main.h"
/**
* print_alphabet - prints the alphabets in lower case
* Return: Always 0 (success)
*/

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
