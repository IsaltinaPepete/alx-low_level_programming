#include <stdio.h>

/**
 * main - numbers of base 16
 *
 * Return: 0(Success)
 */
int main(void)
{
	int num = 0;
	char letter = 'a';

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
