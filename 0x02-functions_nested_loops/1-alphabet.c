#include "holberton.h"
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
	_putchar(c);
	c++;
	}
	putchar ('\n');
	return (0);
}
