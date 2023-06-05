#include "main.h"

/**
 * print_rev - prints string in reverse follow w new line
 * @str: string to print
 * Return: no return
 */

void print_rev(char *str)
{
	int i, j;

	j = 0;
	for (i = 0; str[i] != '\0' ; i++)
		j++;

	j = (j - 1);
	for (i = j; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
