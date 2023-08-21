#include "main.h"

/**
 * swap_int - swap
 * @a: pointer 1
 * @b: pointer 2
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
