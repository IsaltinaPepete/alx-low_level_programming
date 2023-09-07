#include "main.h"

/**
 * *_strcat - something
 * @dest: paramiter
 * @src: paramiter
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	char *pointer = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (pointer);
}
