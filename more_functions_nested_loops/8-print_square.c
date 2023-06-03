#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*more headers go here */

/**
 * print_square - uses hashtag to print square
 *
 * @size: size of square
 *
 * Return: returns nothing
 *
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
