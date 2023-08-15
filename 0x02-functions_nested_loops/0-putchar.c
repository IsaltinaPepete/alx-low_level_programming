#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0(Sucess)
 */
int main(void)
{
	char text[] = "_putchar";
	int i;

	for (i = 0; text != '\0'; i++)
	{
		putchar(text[i]);
	}
	putchar("\n");
	return (0);
}
