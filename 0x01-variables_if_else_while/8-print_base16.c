#include <stdio.h>
/**
 * main - Print numbers
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int ap;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	for (ap = 'a'; ap <= 'f'; ap++)
		putchar(ap);
	putchar('\n');
	return (0);
}
