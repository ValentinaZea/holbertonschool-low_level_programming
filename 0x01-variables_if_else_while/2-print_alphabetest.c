#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int x;
	int lower_x;

	for (x = 'A'; x <= 'Z'; x++)
	{
	lower_x = tolower(x);
	putchar(lower_x);
	}
	return (0);
}
