#include "main.h"

/**
 * print_last_digitc - print the last digit
 */
int print_last_digit(int)
{
	int num;
	
	num = n % 10;

	if (num < 0)
		num = -num;

	_putchar(num + '0');
	return (num);
}
