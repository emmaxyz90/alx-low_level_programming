#include <stdio.h>

int main(void)
{
	int intType;
	float floatType;
	char charType;
	long int longIntType;
	long long int longLongintType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
}
