#include "main.h"

/**
 * _puts_recursion - function
 * @s: paramiter
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
	} else
	{
		_putchar(s[0]);
		*s++;
		_puts_recursion(s);
	}
}
