#include "holberton.h"
/**
 * _islower - Print alphabet in lowercase
 *
 * @c:char
 *
 * Return: If lowercase 1 - Else 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
