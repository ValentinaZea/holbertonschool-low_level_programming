#include <stdio.h>
/**
 * main - Print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	int i;
 
	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	}
	while (c <= 'f')
	{
	putchar(c);
	c++;
	}
	putchar ('\n');
	return (0);
}
