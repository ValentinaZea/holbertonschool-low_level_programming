#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'A';
	while (c <= 'Z')
	{
	putchar(tolower(c));
	c++;
	}
	return (0);
}