#include <stdio.h>

/**
* main - Prints size of many var types
*
* Description: using the main function
* return: 0 
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %i byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size of a long int: %i byte(s)\n", sizeof(li));
	printf("Size of a long long int: %i byte(s)\n", sizeof(lli));
	printf("Size of a float: %i byte(s)\n", sizeof(f));
	return (0);
}
