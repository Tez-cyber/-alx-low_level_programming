#include <stdio.h>
/**
 * main - show sizes of datatypes
 *
 * Description: Using main function to print sizes
 * of datatypes
 * Return: 0
 */
int main(void)
{
	char c;
	int b;
	long int a;
	long long int d;
	float e;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(a));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e));
}

