#include "main.h"

/**
 * print_binary - prints binary from decimal input
 * @n: decimal based number to print in binary
 * Return: return nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + 48);
}
