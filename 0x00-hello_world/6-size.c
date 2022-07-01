#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
*/
int main(void)
{
	char c;
	int i;
	float f;
	long int l;
	long long int ll;

	printf("Size of char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	printf("Size of a long integer: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long integer: %lu byte(s)\n", sizeof(ll));
	return (0);
}
