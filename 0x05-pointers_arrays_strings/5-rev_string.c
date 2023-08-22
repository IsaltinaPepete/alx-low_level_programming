#include "main.h"

/**
 * rev_string - reverse
 * @s:pointer
 */
void rev_string(char *s)
{
	int i, len, j;
	char *new_string;

	j = 0;
	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		new_string[j] = s[i];
		j++;
	}

	*s = *new_string;
}
