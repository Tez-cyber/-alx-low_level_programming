#include <stdio.h>
#include "main.h"
#include <string.h>


/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (len--)
		putchar(*(s + len));
	putchar(10);
}

