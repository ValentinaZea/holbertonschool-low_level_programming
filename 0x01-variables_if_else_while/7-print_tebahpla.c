#include <stdio.h>
/**
 * main - Print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
	putchar(c);
	c--;
	}
	putchar ('\n');
	return (0);
}
