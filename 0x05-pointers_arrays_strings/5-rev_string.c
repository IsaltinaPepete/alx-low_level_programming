#include "main.h"

/**
 * rev_string - reverse
 * @s:pointer
 */
void rev_string(char *s)
{
	int i, len, j;
	char aux;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	j = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		aux = s[i];
		s[i] = s[j];
		s[j] = aux;
		j--;
	}
}
