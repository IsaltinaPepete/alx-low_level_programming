#include "main.h"

/**
 * _isalpha - checks if the paramiter is in the aphabet
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
