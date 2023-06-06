#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other char of a sting w new line
 * @str: string input
 * Return: no return
 */
void puts2(char *str);
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		if (i == 0 || i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
