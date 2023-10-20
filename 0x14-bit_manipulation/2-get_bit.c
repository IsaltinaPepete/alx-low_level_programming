#include "main.h"

/**
 * get_bit - the function
 * @n: paramiter
 * @index: paramiter
 * Return: 1 ou 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int number;

	if (index > 64)
		return (-1);

	number = n >> index;

	return (number & 1);
}
