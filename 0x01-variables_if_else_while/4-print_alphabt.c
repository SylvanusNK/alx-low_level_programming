#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - returs all alphabets with the exception of q and e
 * Return: Alwaya 0 (success)
*/
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{

if (ch != 'q' && ch != 'e')

putchar(ch);

}


putchar(10)


return (0);

}
