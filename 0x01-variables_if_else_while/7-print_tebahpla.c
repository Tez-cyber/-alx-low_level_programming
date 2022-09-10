#include <stdio.h>
/**
 * main - Print alphabets
 *
 * Return: 0
 */
int main(void)
{
	char ap;

	for (ap = 'z'; ap >= 'a'; ap--)
		putchar(ap);
	putchar('\n');
	return (0);
}
