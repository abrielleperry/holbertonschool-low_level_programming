#include "main.h"
/* more headers go here */

/**
 * more_numbers - prints numbers 0 to 14, x10
 *
 * Return; retuns nothing
 *
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar('0' + 1);
			_putchar((i % 10) + '0');
		}
	_putchar('\n');
	}

}
