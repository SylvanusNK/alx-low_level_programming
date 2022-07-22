#include "main.h"
/**
* _islower - checks for lower case alphabets
* @letter: number or an alphabet
*Return: return 0 (success) or else 1
*/

int _islower(int letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
