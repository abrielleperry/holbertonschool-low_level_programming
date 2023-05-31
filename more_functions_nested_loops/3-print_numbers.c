#include "main.h"
/* more headers go here*/

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: returns nothing
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');

}
