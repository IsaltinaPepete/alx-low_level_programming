#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int i;

	if (n <= 97)
	{
		for (i = n; i <= 9; i++)
		{
			printf("%d, ", i);
		}
	} else if (n >= 99)
	{
		for (i = n; i >= 99; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("%d", 98);
	_putchar('\n');
}
