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
		for (i = n; i <= 97; i++)
		{
			printf(n, ", ");
		}
	} else
	{
		for (i = n; i >= 97; i--)
		{
			printf(n, ", ");
		}
	}
	printf(98);
}
