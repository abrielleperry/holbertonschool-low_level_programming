#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success, returns the character written.
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

/**
 * _puts - a function that prints a string
 * @str: string input
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		if (_putchar(*str) == -1)
		{
			return;
		}
		str++;
	}
	_putchar('\n');
}
