#include <stdio.h>

/**
 * main -Entry point
 * Return: 0
 */
int main(void)
{
	int a[] = {42, 1337, 7};
	int *p = a;

	p += 2;
	printf("a[2] = %d\n", *p);
	return (0);
}
