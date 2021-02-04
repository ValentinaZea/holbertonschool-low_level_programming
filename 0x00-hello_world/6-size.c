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
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char : %lu byte(s)\n", sizeof(c));
	printf("Size of an int : %lu byte(s)\n", sizeof(i));
	printf("Size of a long int : %lu byte(s)\n", sizeof(li));
	printf("Size of a long long int : %lu byte(s)\n", sizeof(lli));
	printf("Size of a float : %lu byte(s)\n", sizeof(f);
	return (0);
}

