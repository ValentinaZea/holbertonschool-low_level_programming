#include "holberton.h"
/**
 * print_line - Draw straight line
 *
 * @n: int
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
		_putchar('_');
		n--;
		}
		_putchar('\n');
	}
	else
	{
	_putchar ('\n');
	}
}

