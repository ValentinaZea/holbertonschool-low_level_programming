#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
	putchar("%c\n", c);
	c++;
	}
	return (0);
}
