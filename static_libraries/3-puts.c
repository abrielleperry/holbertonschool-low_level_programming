#include "main.h"
#include <stdio.h>
/**
 * _puts - function that print a string followed by new line
 * @str: parameter defined in main
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
