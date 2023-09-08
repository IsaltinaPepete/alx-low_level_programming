#include "main.h"

/**
 * _memset - function
 * @s: paramiter
 * @b: paramiter
 * @n: paramiter
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
