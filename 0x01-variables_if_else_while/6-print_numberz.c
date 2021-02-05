#include <stdio.h>
/**
 * main - Prints numbers from 0-9
 * Return: 0
 */
int main(void)
{
	char ch = '1';

	for (ch = '0'; ch < '10'; ch++)
	{
	putchar(ch);
	}
	printf("\n");
	return (0);
}
