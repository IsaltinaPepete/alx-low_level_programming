#include <stdio.h>

/**
 * main - pint alphabet in reverse
 *
 * Return: 0(Success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
