#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string input
 * Return: no return
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
