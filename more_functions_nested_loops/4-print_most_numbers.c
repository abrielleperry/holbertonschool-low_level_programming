#include "main.h"
/* more headers go here*/

/**
 * print_most_numbers 
 *
 * Return: returns nothing
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			;
		else
			_putchar(i + '0');
	}
	_putchar('\n);
}
