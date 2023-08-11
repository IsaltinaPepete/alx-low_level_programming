#include <stdio.h>

/**
 * main - pint 0 ... 9
 *
 * Return: 0(Success)
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
