#include <stdio.h>
/**
 * main - Prints numbers from 0-9
 * Return: 0
 */
int main(void)
{
	int c;
	int i;

	c = getchar();
	while (c != EOF)
	{
	for (i = 0; i < 10; i++)
	{
		if (c == i)
		{
		putchar(i);
		}
	}
	}
	printf("\n");
	return (0);
}
