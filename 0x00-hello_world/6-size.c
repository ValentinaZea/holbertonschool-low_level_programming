#include <stdio.h>
/*
 * main - Size of various types
 * @c: Character type
 * @i: Int type
 * @li: Longint type
 * @lli: Longlong int type
 * @f: Float type
 * Description: Prints the size of various types depending on
 * the computer where is run on
 *
*/
int main(void)
{
	char charType;
	int intType;
	long int longType;
	long long int longLongType;
	float floatType;

	printf("Size of a char : %zu byte(s)\n", sizeof(charType));
	printf("Size of an int : %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int : %zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int : %zu byte(s)\n", sizeof(longLongType));
	printf("Size of a float : %zu byte(s)\n", sizeof(floatType))
	return (0);
}

