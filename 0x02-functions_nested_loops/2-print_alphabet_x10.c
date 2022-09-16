#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char ap;

	while (count++ <= 9)
	{
		for (ap = 'a'; ap <= 'z'; ap++)
			_putchar(ap);
		_putchar('\n');
	}
}
