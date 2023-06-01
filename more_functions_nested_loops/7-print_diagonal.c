#include <unistd.h>
#include "main.h"
/* more headers go here */

/**
 * print_diagnosal - prints the line of length i
 *
 * @n: length of line to print
 *
 * Return: retuns nothing
 *
 */

void print_diagnosal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');

}
