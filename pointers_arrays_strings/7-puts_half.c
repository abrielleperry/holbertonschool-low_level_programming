#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of string w a new line
 * @str: string input
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, j, k;

	j = 0;
	for (i = 0; str[i] != '\0' ; i++)
		j++;
	j = (j - 1);
	if ((j % 2) == 0)
		k = (j + 2) / 2;
	else
		k = ((j + 1) / 2);
	for (i = k; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
