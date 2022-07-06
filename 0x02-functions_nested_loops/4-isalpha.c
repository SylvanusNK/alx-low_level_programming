#include "main.h"
/**
* _isalpha - check for an alphabetical letter
* @type: used for consideration
* Return: return 0 if successful otherwise 1
*/

int _isalpha(int type)
{
	if (type >= 'a' || type >= 'A' && type <= 'z' || type <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
