#include "holberton.h"
/**
 * more_numbers - Print 10 times numbers 0-14
 * Return: 0
 */
void more_numbers(void)
{
	int c, i;
	char *num = "1234567891011121314";

	for (i = 0 ; i < 11 ; i++)
	{
		while(num[c] != '\0')
		{
		_putchar(num[c]);
		c++;
		}
		
	_putchar ('\n');
	}
}
