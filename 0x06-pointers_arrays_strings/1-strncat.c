#include "main.h"

/**
 * _strncat - funtion
 * @dest: paramiter
 * @src: paramiter
 * @n: paramiter
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}

	return (dest);
}
