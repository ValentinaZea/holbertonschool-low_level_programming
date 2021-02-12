#include "holberton.h"
/**
 * print_diagonal - Draws a diagonal line
 *
 * @n: int
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0 ; j < n ; j++)
		{
			if (i == j)
			{
			_putchar(92);
			_putchar('\n');
			}
			else
			{
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
