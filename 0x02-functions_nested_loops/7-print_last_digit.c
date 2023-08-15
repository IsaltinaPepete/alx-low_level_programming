#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: the paramiter
 * Return: number
 */
int print_last_digit(int n)
{
	int num;

	num = n % 10;

	if (num < 0)
		num = -num;

	_putchar(num + '0');
	return (num);
}
