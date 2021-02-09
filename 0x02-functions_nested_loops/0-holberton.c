#include "holberton.h"
/**
 * main - Print message
 *
 * Return: 0 
 */
int main (void)
{

	char holb[] = "Holberton\n";
	int i;

	while (holb[i] != '\0')
	{
	_putchar(holb[i]);
	i++;
	}
	return (0);
}
