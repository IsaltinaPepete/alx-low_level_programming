#include "main.h"

/**
 * _strncpy - copiar
 * @dest: paramiter
 * @src: paramiter
 * @n: paramiter
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
