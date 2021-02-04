#include <stdio.h>
/**
 * main - Print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char l;
	char u;

	l = 'a';
	while (l <= 'z')
	{
	putchar(l);
	l++;
	}
	u = 'A';
	while (u <= 'Z')
	{
	putchar(u);
	u++;
	}
	putchar ('\n');
	return (0);
}
