#include "holberton.h"
/**
 * _isupper - Checks for uppercase character
 *
 * @c:int
 *
 * Return: If uppercase 1 - Else 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
