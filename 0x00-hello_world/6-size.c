#include <stdio.h>
/*
 * main - Size of various types
 * Description: Prints the size of various types depending on
 * the computer where is run on
 *
*/
int main(void)
{
	printf("Size of a char : %lu byte(s)\n", sizeof(char));
	printf("Size of an int : %lu byte(s)\n", sizeof(int));
	printf("Size of a long int : %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int : %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float : %lu byte(s)\n", sizeof(float));

	return (0);
}

