#include <stdio.h>
/**
 * main - PRINT LETTERS
 *
 * Return: 0
 */
int main(void)
{
	char ap;

	for (ap = 'a'; ap <= 'z'; ap++)
	{
		if (ap != 'q' && ap != 'e')
			putchar(ap);
	}
	putchar('\n');
	return (0);
}
