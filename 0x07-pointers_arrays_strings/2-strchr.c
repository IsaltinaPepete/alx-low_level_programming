#include "main.h"

/**
 * _strchr - pointer
 * @s: paramiter
 * @c: paramiter
 * Return: first ocorence of c in s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
