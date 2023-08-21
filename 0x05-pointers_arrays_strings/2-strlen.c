#include "main.h"

/**
 * _strlen - legth
 * @s: the pointer
 * Return: legth
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
