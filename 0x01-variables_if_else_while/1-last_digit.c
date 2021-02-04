#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Evaluate last digit
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
	printf("Last digit of %d is %u and is greater than 5\n", n, n);
	}
	else if (n == 0)
	{
	printf("Last digit of %d is %u and is\n", n, n);
	}
	else if (n < 6 && != 0)
	{
	printf("Last digit of %d is %u and is les than 6 and not 0\n", n, n);
	}
	return (0);
}
