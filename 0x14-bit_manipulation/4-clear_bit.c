#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: paramiter
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int number;

	if (index > 64)
		return (-1);
	number = index;
	for (i = 1; number > 0; i *= 2, number--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}

