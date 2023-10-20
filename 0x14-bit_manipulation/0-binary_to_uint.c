#include "main.h"

/**
 * binary_to_uint - convert
 * @b: paramiter
 * Return: something
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, power, total;

	total = 0;
	power = 0;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (i = len; i > 0; i--)
	{
		if (b[i] == '1')
		{
			total += 1 << power;
		}
		power++;
	}

	return (total);
