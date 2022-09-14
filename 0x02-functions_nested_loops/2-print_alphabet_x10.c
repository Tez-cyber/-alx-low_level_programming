#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times tha alphabet
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char ap;

	while (count++ <= 9)
	{
		for (ap = 'a';  ap <= 'z'; ap++)
			_putchar(ap);
		_putchar('\n');
	}
}	
