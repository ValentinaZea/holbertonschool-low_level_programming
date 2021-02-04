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

	printf("Size of a char : %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int : %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int : %lu.\n", (unsigned long)sizeof(li));
	printf("Size of a long long int : %lu.\n", (unsigned long)sizeof(lli));
	printf("Size of a float : %lu.\n", (unsigned long)sizeiof(f);
	return (0);
}

