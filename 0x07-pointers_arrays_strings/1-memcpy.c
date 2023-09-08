#include "main.h"

/**
 * _memcpy-  function
 * @src: paramiter
 * @dest: paramiter
 * @n:paramiter
 * Return:`src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
