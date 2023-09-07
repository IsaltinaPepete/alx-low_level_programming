#include "main.h"

/**
 * *_strcat - something
 * @dest: paramiter
 * @src: paramiter
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		det[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
