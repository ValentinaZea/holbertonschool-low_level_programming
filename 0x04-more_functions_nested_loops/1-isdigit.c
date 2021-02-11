#include "holberton.h"
/**
 * _isdigit - Checks for a digit
 *
 * @c:int
 *
 * Return: If digit 1 - Else 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
