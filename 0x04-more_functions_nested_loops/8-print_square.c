#include "holberton.h"
/**
 * print_square - Print a square of #
 *
 * @size: int
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size ; j++)
		{
			if (j <= size)
			{
			_putchar('#');
			}
			else
			{
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
