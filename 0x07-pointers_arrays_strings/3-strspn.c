#include "main.h"

/**
 * _strspn - function
 * @s: paramiter
 * @accept: paramiter
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cont;

	cont = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				cont++;
			}
			accept++;
		}
		s++;
	}

	return (cont);
}
